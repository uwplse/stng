from stencil_ir import *
from verify import *
from assertion_to_sketch import *
import asp.codegen.ast_tools as ast_tools
from invariant import *

def loop_key(node):
    import hashlib
    return hashlib.sha224(tree_to_str(node)).hexdigest()[0:10]

class RHSInvariantReplacer(ast_tools.NodeTransformer):
    """
    Replaces the invariant calls in the "then" parts of implications with a version
    that does not check the invariant for *all* previous loop iterations.
    """
    def __init__(self, loopvars):
        self.in_then = False
        self.loopvars = loopvars


    def visit_ImplicationExp(self, node):
        newifx = self.visit(node.ifx)
        self.in_then = True
        newthen = self.visit(node.then)
        self.in_then = False
        return ImplicationExp(newifx, newthen)

    def visit_CallExp(self, node):
        if self.in_then and node.fname.name != "postcondition":
            return CallExp(VarNode(node.fname.name+"__2"),
                    node.params+[VarNode(x+"_p") for x in self.loopvars])

        return node

class OutputArrayFinder(ast_tools.NodeVisitor):
    def __init__(self):
        self.output_arrays = []

    def get_output_arrays(self, tree):
        self.visit(tree)
        return self.output_arrays

    def visit_Block(self, node):
        map(self.visit, node.body)

    def visit_AssignExp(self, node):
        print "outputarrayfinder visiting ", tree_to_str(node)
        if isinstance(node.lval, ArrExp):
            if node.lval.name.name not in self.output_arrays:
                self.output_arrays += [node.lval.name.name]

class MaxFinder(asp.codegen.ast_tools.NodeVisitor):
    def __init__(self, loopvar):
        super(MaxFinder, self).__init__()
        self.maximum = None
        self.loopvar = loopvar
        print "finding max for ", loopvar
    def visit_Block(self, node):
        #print "visiting ", g.tree_to_str(node)
        map(self.visit, node.body)
    def visit_WhileLoop(self, node):
        print "visiting ", tree_to_str(node)
        if node.iter_var.name != self.loopvar:
            self.generic_visit(node)
        if (type(node.test) == BinExp and
                type(node.test.left) == VarNode and
                node.test.left.name == self.loopvar):
            self.maximum = node.test.right
        self.generic_visit(node)

class InitFinder(asp.codegen.ast_tools.NodeVisitor):
    class VarFinder(asp.codegen.ast_tools.NodeVisitor):
        def __init__(self, varname):
            self.varname = varname
            self.found = False
        def visit_Block(self, node):
            map(self.visit, node.body)
        def visit_VarNode(self, node):
            if node.name == self.varname:
                self.found = True

    def __init__(self, loopvar):
        self.loopvar = loopvar
        self.init = None
        print "finding initial value for ", loopvar
    def visit_Block(self, node):
        map(self.visit, node.body)
    def visit_AssignExp(self, node):
        # if the lhs is the loop variable, and the rhs does not include
        # the loop variable we can perhaps safely say this is the initializer
        if (type(node.lval) == VarNode and node.lval.name == self.loopvar):
            f = InitFinder.VarFinder(self.loopvar)
            f.visit(node.rval)
            if (not f.found):
                self.init = node.rval

class OffsetAdder(asp.codegen.ast_tools.NodeTransformer):
    def visit_ArrExp(self, node):
        return ArrExp(node.name, BinExp(NumNode(99), '+', node.loc))
    def visit_Block(self, node):
        return Block(map(self.visit, node.body))

class ArrLDFinder(asp.codegen.ast_tools.NodeVisitor):
    """
    This class takes in a program and looks through the array accesses to
    find expressions that could be the leading dimension(s) of the array.
    """
    class LargestWantedSubtree(asp.codegen.ast_tools.NodeVisitor):
        def find(self, node, loopvars):
            self.loopvars = loopvars
            self.largest_candidates = []
            self.visit(node)
            print "LARGEST CAND: ", self.largest_candidates
            return self.largest_candidates

        def visit_BinExp(self, node):
            lresult = self.visit(node.left)
            rresult = self.visit(node.right)
            print tree_to_str(node), lresult, rresult
            if lresult and rresult:
                self.largest_candidates.append(node)
            elif lresult:
                print "LRESULT", lresult
                self.largest_candidates.append(node.left)
            elif rresult:
                print "RRESULT", rresult
                self.largest_candidates.append(node.right)

            return lresult and rresult
        def visit_VarNode(self, node):
            if node.name not in self.loopvars:
                return True
            else:
                return False
        def visit_NumNode(self, node):
            return True

    def find(self, program, loopvars):
        self.loopvars = loopvars
        self.candidates = []
        print "ArrLDFinder"
        self.visit(program)
        return self.candidates

    def visit_Block(self, node):
        map(self.visit, node.body)

    def visit_ArrExp(self, node):
        print "Checking ", tree_to_str(node)
        self.candidates += ArrLDFinder.LargestWantedSubtree().find(node, self.loopvars)

class SketchGenerator(object):
    """
    Generates a sketch from a program.  This includes building the sketch from a combination
    of program source and templates, generating function signatures, etc.  The end result of
    this is a sketch ready to be sent to the compiler.
    """
    def __init__(self, program, inputs, loopvars):
        """
        program is the AST of the loop nest to process.
        inputs is a dict mapping names to (Sketch) types (most importantly for arrays).
        """
        self.program = program
        print tree_to_str(program)
        self.inputs = self.concretize_arrays(inputs)
        self.loopvars = loopvars
        self.loopvar_mins = {}
        self.loopvar_maxs = {}
        if program:
            self.out_array = OutputArrayFinder().get_output_arrays(program)
        self.recursion_limit = 8
        self.containing_loop_invs = {}
        self.per_loop_mins = {}
        self.per_loop_maxs = {}

    def concretize_arrays(self, inputs):
        """
        Turn arrays with size _N*_N... into a constant size.
        """
        import re
        new_inputs = []
        for x in inputs:
            if "_N" in x[1]:
                x = (x[0], re.subn("\[.*\]", "[1000]", x[1])[0])
            new_inputs.append(x)
        print "After concretization: ", new_inputs
        return new_inputs

    def generate(self):
        """
        Top-level.  Generates an entire Sketch program for the given program and inputs.
        """
        # first, we generate the invariant & postcondition call
        postcondition = CallExp(VarNode("postcondition"),
                [VarNode(x[0]) for x in self.inputs] + map(lambda x: VarNode(x), self.get_loopvars()) + map(lambda x: VarNode(x+"_p"), self.get_loopvars()))

        new_invariants = self.generate_invariant_func_signatures()

        print "Found %d loops and generated invariant signatures." % len(new_invariants)

        # get verification conditions
        wpc = WeakestPrecondition(self.program, postcondition, [], invariant_call=new_invariants)
        conds = wpc.get()
        additional_conds = wpc.additional_conditions

        # replace invariants on RHS of implications with different invariant structure
        conds = RHSInvariantReplacer(self.get_loopvars()).visit(conds)
        additional_conds = map(RHSInvariantReplacer(self.get_loopvars()).visit, additional_conds)

        # translate verification conditions to Sketch
        ret = ToSketch(conds, additional_conds).to_str()

        # put it all together
        ret = "%s implements main_spec {\n %s\n %s \n}\n\n" % (self.generate_signature(), self.generate_size(), ret)
        ret += "%s {\n %s \n \n}\n\n" % (self.generate_signature_spec(), self.generate_assumptions(4))
        ret += self.generate_invariant_funcs()
        ret += self.generate_postcon_func()
        ret += self.generate_generators()

        return ret

    def generate_invariant_func_signatures(self):
        """
        Generates signatures for each invariant function into a dict keyed by a hash of the loop
        body.
        """
        class InvGenLoopVisitor(asp.codegen.ast_tools.NodeVisitor):
            def __init__(self, inputs, loopvars):
                super(InvGenLoopVisitor, self).__init__()
                self.invariants = {}
                self.invariant_names_to_loops = {} # dict from names to loops
                self.inputs = inputs
                self.loopvars = loopvars

            def visit_Block(self, node):
                map(self.visit, node.body)

            def visit_WhileLoop(self, node):
                key = loop_key(node)
                invariant_name = "I_%s_%s" % (node.iter_var.name, key)
                self.invariants[key] = CallExp(VarNode(invariant_name),
                    [VarNode(x[0]) for x in self.inputs] + map(lambda x: VarNode(x), self.loopvars))
                self.invariant_names_to_loops[invariant_name] = node
                self.visit(node.body)

        visitor = InvGenLoopVisitor(self.inputs, self.get_loopvars())
        visitor.visit(self.program)
        self.invariant_names_to_loops = visitor.invariant_names_to_loops
        return visitor.invariants


    def generate_signature(self):
        """
        Generate the signature for main() in the sketch.
        """
        return "void main(%s, %s, %s)" % (self.get_params(), ','.join(["int "+x for x in self.get_loopvars()]), ','.join(map(lambda x: "int " + x + "_p", self.get_loopvars())))

    def generate_signature_spec(self):
        """
        Generate the signature for main() in the sketch.
        """
        return "void main_spec(%s, %s, %s)" % (self.get_params(), ','.join(["int "+x for x in self.get_loopvars()]), ','.join(map(lambda x: "int " + x + "_p", self.get_loopvars())))

    def generate_invariant_funcs(self):
        """
        Generate the sketch function for the invariant.
        """
        from mako.template import Template
        inv_template = Template(filename="templates/invariant/1.mako")
        ret = ""
        print "IN generate_invariant_funcs()"

        for invariant in self.invariant_names_to_loops.keys():
            #FIXME
            looplevel = 0
            node = self.invariant_names_to_loops[invariant]
            thiskey = loop_key(node)
            var = node.iter_var.name
            containing_loop_invs = self.get_containing_loop_invs(node)
            # we need to also know which loops this loop contains
            thisloopcontains = self.get_loops_contained_by(node)
            ret += inv_template.render(name=invariant,
                                       looplevel=looplevel,
                                       containing_loop_invs=containing_loop_invs,
                                       parameters=self.get_params(),
                                       int_params=[x[0] for x in self.inputs if x[1]=="int"] + self.get_loopvars(),
                                       call_params=self.get_params_without_types(),
                                       outarray=self.get_out_array(),
                                       thisloopvar=var,
                                       thiskey=thiskey,
                                       thisloopcontains=thisloopcontains,
                                       loopvar=self.get_loopvars(),
                                       per_loop_mins=self.get_per_loop_mins(),
                                       per_loop_maxs=self.get_per_loop_maxs(),
                                       mins=self.get_loopvar_mins(),
                                       maxs=self.get_loopvar_maxs(),
                                       recursion_limit=self.recursion_limit)
        print ret
        # exit()
        # for looplevel in range(len(self.get_loopvars())):
        #     var = self.get_loopvars()[looplevel]
        #     ret += inv_template.render(name="I_"+var,
        #                                looplevel=looplevel,
        #                                parameters=self.get_params(),
        #                                int_params=[x[0] for x in self.inputs if x[1]=="int"] + self.get_loopvars(),
        #                                call_params=self.get_params_without_types(),
        #                                outarray=self.get_out_array(),
        #                                loopvar=self.get_loopvars(),
        #                                mins=self.get_loopvar_mins(),
        #                                maxs=self.get_loopvar_maxs(),
        #                                recursion_limit=self.recursion_limit)
        return ret

    def generate_size(self):
        """
        Generates the statement used to size arrays, and the step
        condition (controls whether to apply a step of the stencil).
        """
        import re
        #TODO: generalize to have outputs of different sizes (i.e. allow outputs not all to be same size)
        print self.inputs, "OUTARRAY: ", self.get_out_array()
        out_array_type = [x[1] for x in self.inputs if x[0] == self.get_out_array()[0]][0]
        match = re.search("\[(.*)\]", out_array_type)
        sz = match.group(1)
        ret = "int _array_sz = %s;\n" % sz
        maxs, mins = {}, {}
        for x in self.get_loopvars():
            maxfinder = MaxFinder(x)
            maxfinder.visit(self.program)
            maxs[x] = maxfinder.maximum
            initfinder = InitFinder(x)
            initfinder.visit(self.program)
            mins[x] = initfinder.init
        ret += "boolean step_condition = "
        ret += "&&".join(["(%s < %s)" % (x, tree_to_str(maxs[x])) for x in maxs.keys()])
        ret += "&&" + "&&".join(["(%s >= %s)" % (x, tree_to_str(mins[x])) for x in mins.keys()])
        ret += ";"
        return ret



    def generate_postcon_func(self):
        """
        Generate the sketch function for the postcondition.
        """
        from mako.template import Template
        pcon_template = Template(filename="templates/postcondition/1.mako")
        return pcon_template.render(parameters=self.get_params(),
                                    call_params=self.get_params_without_types(),
                                    outarray=self.get_out_array(),
                                    int_params=[x[0] for x in self.inputs if x[1]=="int"] + self.get_loopvars(),
                                    loopvar=self.get_loopvars(),
                                    mins=self.get_loopvar_mins(),
                                    maxs=self.get_loopvar_maxs(),
                                    recursion_limit=self.recursion_limit)

    def generate_generators(self):
        """
        Generates the generators for the RHS for the invariant/postcondition.
        """
        from mako.template import Template
        import re
        common_template = Template(filename="templates/generators/common.mako")
        gen_template = Template(filename="templates/generators/1.mako")

        # find candidate expressions for array LDs
        candidates = ArrLDFinder().find(self.program, self.get_loopvars())
        filtered_candidates = list(set(map(tree_to_str, candidates)))
        print "Candidate expressions for array LDs: ", '\n'.join(filtered_candidates)

        ret = common_template.render(loopvar=self.get_loopvars(),
                                     int_params=[x[0] for x in self.inputs if x[1]=="int"] + self.get_loopvars(),
                                     array_sz_candidates = filtered_candidates,
                                     arrays=[x[0] for x in self.inputs if re.search("\[", x[1])])

        for arr in self.get_out_array():
            # we want all the arrays that are not output
            # this is because even if we use the output arrays in a RAW manner, we want to
            # construct our conditions in terms of the inputs
            arraynames = [x[0] for x in self.inputs if re.search("\[", x[1]) and x[0] not in self.get_out_array()]
            ret += gen_template.render(parameters=self.get_params() + ", " + ','.join(["int " + x for x in self.get_loopvars()]),
                                        call_params=self.get_params_without_types() + ", " + ','.join(self.get_loopvars()),
                                        outarray=arr,
                                        int_params=[x[0] for x in self.inputs if x[1]=="int"] + self.get_loopvars(),
                                        arraynames=arraynames,
                                        loopvar=self.get_loopvars())
        return ret


    def populate_per_loop_bounds(self):
        """
        Populates the data structures that contain the per-loop maxs and mins.
        This dict is keyed by the loop's corresponding key and the
        value is (loopvar,max|min).
        """
        class PerLoopMaxFinder(asp.codegen.ast_tools.NodeVisitor):
            def __init__(self, keyfunc):
                super(PerLoopMaxFinder, self).__init__()
                self.keyfunc = keyfunc
                self.maxs = {}
            def visit_Block(self, node):
                #print "visiting ", g.tree_to_str(node)
                map(self.visit, node.body)
            def visit_WhileLoop(self, node):
                import copy
                if (type(node.test) == BinExp and
                    type(node.test.left) == VarNode):
                    self.maxs[self.keyfunc(node)] = copy.deepcopy(node.test.right)
                    self.visit(node.body)
                else:
                    self.generic_visit(node)

        class PerLoopInitFinder(asp.codegen.ast_tools.NodeVisitor):
            def __init__(self):
                super(PerLoopInitFinder, self).__init__()
                self.mins = {}
            def visit_Block(self, node):
                for stmtnum in range(len(node.body)):
                    if (isinstance(node.body[stmtnum], AssignExp) and
                       len(node.body) > stmtnum+1 and
                       isinstance(node.body[stmtnum+1], WhileLoop) and
                       isinstance(node.body[stmtnum].lval, VarNode) and
                       node.body[stmtnum].lval.name == node.body[stmtnum+1].iter_var.name):
                         self.mins[loop_key(node.body[stmtnum+1])] = node.body[stmtnum].rval
                    self.visit(node.body[stmtnum])



        # get maxs
        max_visitor = PerLoopMaxFinder(loop_key)
        max_visitor.visit(self.program)
        print "PER_LOOP_MAXS: ",  ["[%s: %s] " % (key, tree_to_str(max_visitor.maxs[key])) for key in max_visitor.maxs.keys()]
        self.per_loop_maxs = max_visitor.maxs

        # get mins
        min_visitor = PerLoopInitFinder()
        min_visitor.visit(self.program)
        print "PER_LOOP_MINS: ", ["[%s: %s] " % (key, tree_to_str(min_visitor.mins[key])) for key in min_visitor.mins.keys()]
        self.per_loop_mins = min_visitor.mins

    def get_per_loop_maxs(self):
        if not self.per_loop_maxs:
            self.populate_per_loop_bounds()
        return self.per_loop_maxs

    def get_per_loop_mins(self):
        if not self.per_loop_mins:
            self.populate_per_loop_bounds()
        return self.per_loop_mins

    def get_params(self):
        import re
        params = []
        for p in self.inputs:
            if re.search("\[", p[1]):
                params.append("ref %s %s" % (p[1], p[0]))
            else:
                params.append("%s %s" % (p[1], p[0]))

        return ', '.join(params)

    def get_params_without_types(self):
        return ', '.join(["%s" % (x[0]) for x in self.inputs])

    def get_out_array(self):
        return self.out_array

    def get_loopvars(self):
        return self.loopvars

    def get_loopvar_mins(self):
        return self.loopvar_mins

    def get_loopvar_maxs(self):
        return self.loopvar_maxs

    def get_containing_loop_invs(self, node):
        """
        Return a list of (invariant function name, node) that correspond to the loops
        outside a given loop.
        """
        class ContainingLoopVisitor(asp.codegen.ast_tools.NodeVisitor):
            def __init__(self):
                super(ContainingLoopVisitor, self).__init__()
                self.containing_loops = {}
                self.current_outerloops = []

            def visit_Block(self, node):
                # need to do this sequentially
                for n in node.body:
                    self.visit(n)
            def visit_WhileLoop(self, node):
                key = loop_key(node)
                invariant_name = "I_%s_%s" % (node.iter_var.name, key)
                self.containing_loops[invariant_name] = self.current_outerloops[:]
                self.current_outerloops.append((invariant_name, node))
                self.visit(node.body)
                self.current_outerloops.pop()

        if not self.containing_loop_invs:
            visitor = ContainingLoopVisitor()
            visitor.visit(self.program)
            self.containing_loop_invs = visitor.containing_loops
            print "CONTAINING LOOPS:", visitor.containing_loops

        key = loop_key(node)
        invariant_name = "I_%s_%s" % (node.iter_var.name, key)
        return self.containing_loop_invs[invariant_name]

    def get_loops_contained_by(self, node):
        """
        Return a list of (invariant function name, node) that correspond to the
        loops contained by node.
        """
        class ContainedLoopVisitor(asp.codegen.ast_tools.NodeVisitor):
            def __init__(self):
                super(ContainedLoopVisitor, self).__init__()
                self.contained_loops = []
            def visit_Block(self, node):
                map(self.visit, node.body)
            def visit_WhileLoop(self, node):
                key = loop_key(node)
                invariant_name = "I_%s_%s" % (node.iter_var.name, key)
                self.contained_loops.append((invariant_name, node))
                self.visit(node.body)
        visitor = ContainedLoopVisitor()
        visitor.visit(node.body)
        return visitor.contained_loops


    def generate_assumptions(self, arr_size):
        """
        Generates the necessary assumptions to make the sketch resolvable.

        Right now, it generates, for a loopvar `i`, lower and upper bounds for `i` and `i_p`.
        """
        import asp.codegen.ast_tools
        import stencil_ir
        import re
        import itertools

        arraysizenames = [re.match(".*\[(.*)\]", x[1]).group(1) for x in self.inputs if re.search("\[", x[1])]
        arraysizenames = list(set(itertools.chain(*[x.split("*") for x in arraysizenames])))
        ret = ""
#        ret = "\n".join(map(lambda x: "assume( (%s) > 3);\nassume( (%s) < %s);\n" % (x, x, arr_size+1), arraysizenames))

        for x in self.get_loopvars():
            maxfinder = MaxFinder(x)
            maxfinder.visit(self.program)
            initfinder = InitFinder(x)
            initfinder.visit(self.program)

            self.loopvar_mins[x] = stencil_ir.tree_to_str(initfinder.init)
            self.loopvar_maxs[x] = stencil_ir.tree_to_str(maxfinder.maximum)
            ret += "assume ((%s) - (%s) > 1);\n " % (self.loopvar_maxs[x], self.loopvar_mins[x])

        return ret

class SketchGeneratorLevel2(SketchGenerator):
    """
    This version considers all points within the offset, instead of a "cross" shape.
    """
    def generate_generators(self):
        """
        Generates the generators for the RHS for the invariant/postcondition.
        """
        from mako.template import Template
        import re
        common_template = Template(filename="templates/generators/common.mako")
        gen_template = Template(filename="templates/generators/2.mako")

        # find candidate expressions for array LDs
        candidates = ArrLDFinder().find(self.program, self.get_loopvars())
        filtered_candidates = list(set(map(tree_to_str, candidates)))
        print "Candidate expressions for array LDs: ", '\n'.join(filtered_candidates)

        ret = common_template.render(loopvar=self.get_loopvars(),
                                     int_params=[x[0] for x in self.inputs if x[1]=="int"] + self.get_loopvars(),
                                     array_sz_candidates = filtered_candidates,
                                     arrays=[x[0] for x in self.inputs if re.search("\[", x[1])])


        for arr in self.get_out_array():
            # we want all the arrays that are not output
            # this is because even if we use the output arrays in a RAW manner, we want to
            # construct our conditions in terms of the inputs
            arraynames = [x[0] for x in self.inputs if re.search("\[", x[1]) and x[0] not in self.get_out_array()]
            ret += gen_template.render(parameters=self.get_params() + ", " + ','.join(["int " + x for x in self.get_loopvars()]),
                                        call_params=self.get_params_without_types() + ", " + ','.join(self.get_loopvars()),
                                        outarray=arr,
                                        int_params=[x[0] for x in self.inputs if x[1]=="int"] + self.get_loopvars(),
                                        arraynames=arraynames,
                                        loopvar=self.get_loopvars())
        return ret


class SketchGeneratorLevel5(SketchGenerator):
    """
    This version considers considers only points that appear in the program.

    This will fail for some stencils.  We only look at array accesses, and within the
    accesses, we look for "loopvar (+|-) const".
    """
    class FindAccesses(ast_tools.NodeVisitor):
        def find(self, program, loopvars):
            import collections
            self.found = collections.defaultdict(list)
            self.in_arr_access = False
            self.loopvars = loopvars
            self.visit(program)
            self.reorder()
            self.normalize_dim()
            return self.found

        def normalize_dim(self):
            """
            Find max dimension, and then pad all the accesses so they have the same
            dimensionality.
            """
            sofar = -1
            for arr in self.found.keys():
                for acc in self.found[arr]:
                    print "acc is : ", acc
                    if len(acc) > sofar:
                        sofar = len(acc)

            print "Max Dimension: ", sofar
            for arr in self.found.keys():
                for acc in self.found[arr]:
                    howmany = sofar-len(acc)
                    for i in range(howmany):
                        acc += ['0']
            print self.found

        def reorder(self):
            """
            This version of reorder tries to reorder so it is consistent
            with the ordering of the JSON at the top of the IR file.
            """
            import collections
            newfound = collections.defaultdict(list)
            for arr in self.found.keys():
                print "before reorder of ", arr
                print arr, self.found[arr]
                newacc = []
                for acc in self.found[arr]:
                    # first check if it's a constant access; if so, leave it alone
                    is_constant = reduce(lambda x,y: x and y, map(lambda z: z.isdigit(), acc))
                    if is_constant:
                        newfound[arr].append(acc)
                        continue
                    print acc
                    newacc = ['0'] * len(self.loopvars)
                    for i in range(len(self.loopvars)):
                        for pt in acc:
                            if self.loopvars[i] in pt:
                                newacc[i] = pt
                    print newacc
                    newfound[arr].append(newacc)

            print self.found
            print newfound
            self.found = newfound

        def reorder_lessOLD(self):
            """
            Our access functions are in loop-nesting order, so an access like
            a(j,k) is a(k,j) if k is the outermost loop.  we need to reorder so
            that it is consistent with the loop ordering.
            """
            print "IN REORDER", self.loopvars
            import collections
            newfound = collections.defaultdict(list)

            # first find what the max dim is
            sofar = -1
            for arr in self.found.keys():
                for acc in self.found[arr]:
                    print "acc is : ", acc
                    if len(acc) > sofar:
                        sofar = len(acc)

            print "After finding max dim, sofar is ", sofar

            for k in self.found.keys():
                for acc in self.found[k]:
                    mapper = []
                    if len(acc) < sofar:
                        newfound[k].append(acc)
                        continue
                    for access in acc:
                        for i in range(len(self.loopvars)):
                            if self.loopvars[i] in access:
                                    mapper = mapper + [i]


                    mapped = []
                    print k, acc, mapper
                    for m in mapper:
                        print "m is ", m
                        mapped = mapped + [acc[m]]
                    print k, acc, mapper, mapped
                    newfound[k].append(mapped)
            print self.found
            print newfound
            self.found = newfound



        def reorder_OLD(self):
            """
            Our access functions are in loop-nesting order, so an access like
            a(j,k) is a(k,j) if k is the outermost loop.  we need to reorder so
            that it is consistent with the loop ordering.
            """
            print "IN REORDER", self.loopvars
            import collections
            newfound = collections.defaultdict(list)

            # first find what the max dim is
            sofar = -1
            for arr in self.found.keys():
                for acc in self.found[arr]:
                    print "acc is : ", acc
                    if len(acc) > sofar:
                        sofar = len(acc)

            # find a reordering using one of the max dim accesses
            mapper = []
            for k in self.found.keys():
                if len(mapper) == sofar:
                    break
                for acc in self.found[k]:
                    for access in acc:
                        for i in range(len(self.loopvars)):
                            if self.loopvars[i] in access:
                                    mapper = mapper + [i]
                    if len(mapper) == sofar:
                        break
                    else:
                        mapper = []
            for k in self.found.keys():
                for acc in self.found[k]:
                    mapped = []
                    print k, acc, mapper
                    for m in mapper:
                        # don't remap if it's just a single dim
#                        if len(acc) == 1:
#                            mapped = acc
#                            break
                        mapped = mapped + [acc[m]]
                    print k, acc, mapper, mapped
                    newfound[k].append(mapped)
            print self.found
            print newfound
            self.found = newfound



        def visit_Block(self, node):
            map(self.visit, node.body)


        def visit_ArrExp(self, node):
            self.in_arr_access = tree_to_str(node.name)
            print "in_arr_acc:", self.in_arr_access
            self.sofar = []
            self.visit(node.loc)
            if (isinstance(node.loc, VarNode) and node.loc.name in self.loopvars):
                self.sofar.append(node.loc.name)
            if isinstance(node.loc, NumNode):
                self.sofar.append(str(node.loc.val))
            print "SOFAR:", self.sofar
            if self.sofar not in self.found[self.in_arr_access]:
                self.found[self.in_arr_access].append(self.sofar)
            self.in_arr_access = False


        def visit_BinExp(self, node):
            print "looking at ", tree_to_str(node)
            if self.in_arr_access:
                print "and access is within array expression", self.in_arr_access
                if isinstance(node.left, VarNode) and node.left.name in self.loopvars:
                    if isinstance(node.right, NumNode):
                        print "sofar was: ", self.sofar, "and appending ", tree_to_str(node)
                        self.sofar.append(tree_to_str(node))
                    else:
                        print "sofar was: ", self.sofar, "and appending ", tree_to_str(node.left)
                        self.sofar.append(tree_to_str(node.left))
                        self.visit(node.right)
                    return

                if isinstance(node.right, VarNode) and node.right.name in self.loopvars:
                    if isinstance(node.left, NumNode):
                        print "sofar was: ", self.sofar, "and appending ", tree_to_str(node)
                        self.sofar.append(tree_to_str(node))
                    else:
                        print "sofar was: ", self.sofar, "and appending ", tree_to_str(node.right)
                        self.sofar.append(tree_to_str(node.right))
                        self.visit(node.left)
                    return
            self.visit(node.left)
            self.visit(node.right)

    def generate_generators(self):
        """
        Generates the generators for the RHS for the invariant/postcondition.
        """
        from mako.template import Template
        import re
        common_template = Template(filename="templates/generators/common.mako")
        gen_template = Template(filename="templates/generators/5.mako")

        # find candidate expressions for array LDs
        candidates = ArrLDFinder().find(self.program, self.get_loopvars())
        filtered_candidates = list(set(map(tree_to_str, candidates)))
        print "Candidate expressions for array LDs: ", filtered_candidates
        print "arrays=" ,  self.inputs
        print [x[0] for x in self.inputs if re.search("\[", x[1])]
        ret = common_template.render(loopvar=self.get_loopvars(),
                                     int_params=[x[0] for x in self.inputs if x[1]=="int"] + self.get_loopvars(),
                                     array_sz_candidates = filtered_candidates,
                                     arrays=[x[0] for x in self.inputs if re.search("\[", x[1])])


        # find candidate array accesses
        candidate_accesses = SketchGeneratorLevel5.FindAccesses().find(self.program, self.get_loopvars())
        print "Candidate array accesses: ", candidate_accesses


        for arr in self.get_out_array():
            # we want all the arrays that are not output
            # this is because even if we use the output arrays in a RAW manner, we want to
            # construct our conditions in terms of the inputs
            arraynames = [x[0] for x in self.inputs if re.search("\[", x[1]) and x[0] not in self.get_out_array()]
            ret += gen_template.render(parameters=self.get_params() + ", " + ','.join(["int " + x for x in self.get_loopvars()]),
                                        call_params=self.get_params_without_types() + ", " + ','.join(self.get_loopvars()),
                                        outarray=arr,
                                        candidate_accesses=candidate_accesses,
                                        int_params=[x[0] for x in self.inputs if x[1]=="int"] + self.get_loopvars(),
                                        float_params=[(x[1],x[0]) for x in self.inputs if x[1]=="double" or x[1]=="float"],
                                        arraynames=arraynames,
                                        loopvar=self.get_loopvars())
        return ret

class SketchGeneratorLevel6(SketchGeneratorLevel5):
    def generate_generators(self):
        """
        Generates the generators for the RHS for the invariant/postcondition.
        """
        from mako.template import Template
        import re
        common_template = Template(filename="templates/generators/common.mako")
        gen_template = Template(filename="templates/generators/6.mako")

        # find candidate expressions for array LDs
        candidates = ArrLDFinder().find(self.program, self.get_loopvars())
        filtered_candidates = list(set(map(tree_to_str, candidates)))
        print "Candidate expressions for array LDs: ", filtered_candidates

        ret = common_template.render(loopvar=self.get_loopvars(),
                                     int_params=[x[0] for x in self.inputs if x[1]=="int"] + self.get_loopvars(),
                                     array_sz_candidates = filtered_candidates,
                                     arrays=[x[0] for x in self.inputs if re.search("\[", x[1])])


        # find candidate array accesses
        candidate_accesses = SketchGeneratorLevel5.FindAccesses().find(self.program, self.get_loopvars())
        print "Candidate array accesses: ", candidate_accesses


        for arr in self.get_out_array():
            # we want all the arrays that are not output
            # this is because even if we use the output arrays in a RAW manner, we want to
            # construct our conditions in terms of the inputs
            arraynames = [x[0] for x in self.inputs if re.search("\[", x[1]) and x[0] not in self.get_out_array()]
            ret += gen_template.render(parameters=self.get_params() + ", " + ','.join(["int " + x for x in self.get_loopvars()]),
                                        call_params=self.get_params_without_types() + ", " + ','.join(self.get_loopvars()),
                                        outarray=arr,
                                        candidate_accesses=candidate_accesses,
                                        int_params=[x[0] for x in self.inputs if x[1]=="int"] + self.get_loopvars(),
                                        float_params=[(x[1],x[0]) for x in self.inputs if x[1]=="double" or x[1]=="float"],
                                        arraynames=arraynames,
                                        loopvar=self.get_loopvars())
        return ret

class SketchGeneratorLevel7(SketchGeneratorLevel5):
    def generate_generators(self):
        """
        Generates the generators for the RHS for the invariant/postcondition.
        """
        from mako.template import Template
        import re
        common_template = Template(filename="templates/generators/common.mako")
        gen_template = Template(filename="templates/generators/7.mako")

        # find candidate expressions for array LDs
        candidates = ArrLDFinder().find(self.program, self.get_loopvars())
        filtered_candidates = list(set(map(tree_to_str, candidates)))
        print "Candidate expressions for array LDs: ", filtered_candidates

        ret = common_template.render(loopvar=self.get_loopvars(),
                                     int_params=[x[0] for x in self.inputs if x[1]=="int"] + self.get_loopvars(),
                                     array_sz_candidates = filtered_candidates,
                                     arrays=[x[0] for x in self.inputs if re.search("\[", x[1])])


        # find candidate array accesses
        candidate_accesses = SketchGeneratorLevel5.FindAccesses().find(self.program, self.get_loopvars())
        print "Candidate array accesses: ", candidate_accesses


        for arr in self.get_out_array():
            # we want all the arrays that are not output
            # this is because even if we use the output arrays in a RAW manner, we want to
            # construct our conditions in terms of the inputs
            arraynames = [x[0] for x in self.inputs if re.search("\[", x[1]) and x[0] not in self.get_out_array()]
            ret += gen_template.render(parameters=self.get_params() + ", " + ','.join(["int " + x for x in self.get_loopvars()]),
                                        call_params=self.get_params_without_types() + ", " + ','.join(self.get_loopvars()),
                                        outarray=arr,
                                        candidate_accesses=candidate_accesses,
                                        int_params=[x[0] for x in self.inputs if x[1]=="int"] + self.get_loopvars(),
                                        float_params=[(x[1],x[0]) for x in self.inputs if x[1]=="double" or x[1]=="float"],
                                        arraynames=arraynames,
                                        loopvar=self.get_loopvars())
        return ret


class SketchGeneratorLevel11(SketchGeneratorLevel5):
    """
    This class uses the interpreter to guess the overall structure of the invariants/postcondition,
    plus guesses which points are being accessed based on the code.
    """
    def generate_generators(self, gen_template_name="templates/generators/11.mako", common_template_name="templates/generators/common.mako"):
        """
        Generates the generators for the RHS for the invariant/postcondition.
        """
        from mako.template import Template
        import re
        common_template = Template(filename=common_template_name)
        gen_template = Template(filename=gen_template_name)

        # find candidate expressions for array LDs
        candidates = ArrLDFinder().find(self.program, self.get_loopvars())
        filtered_candidates = list(set(map(tree_to_str, candidates)))
        print "Candidate expressions for array LDs: ", filtered_candidates

        ret = common_template.render(loopvar=self.get_loopvars(),
                                     int_params=[x[0] for x in self.inputs if x[1]=="int"] + self.get_loopvars(),
                                     array_sz_candidates = filtered_candidates,
                                     arrays=[x[0] for x in self.inputs if re.search("\[", x[1])])


        # find candidate array accesses
        candidate_accesses = SketchGeneratorLevel5.FindAccesses().find(self.program, self.get_loopvars())
        print "Candidate array accesses: ", candidate_accesses

        # interpret the loop nest to find the overall structure
        import interpret

        inputs = [x for x in self.inputs if x[0] not in self.get_out_array()]
        outputs = [x for x in self.inputs if x[0] in self.get_out_array()]

        print "Interpreter inputs:", inputs
        print "Interpreter outputs:", outputs
        interpreter_result = interpret.Interpreter(inputs, outputs).interpret(self.program)
        pcon_guess = interpret.Guesser(inputs, outputs).guess_postcondition(interpreter_result)
        print pcon_guess


        # compute aggregates across all loops
        all_invariants = {}
        for invariant in self.invariant_names_to_loops.keys():
            node = self.invariant_names_to_loops[invariant]
            thiskey = loop_key(node)
            var = node.iter_var.name
            all_invariants[thiskey] = var

        for arr in self.get_out_array():
            # we want all the arrays that are not output
            # this is because even if we use the output arrays in a RAW manner, we want to
            # construct our conditions in terms of the inputs
            arraynames = [x[0] for x in self.inputs if re.search("\[", x[1]) and x[0] not in self.get_out_array()]
            ret += gen_template.render(parameters=self.get_params() + ", " + ','.join(["int " + x for x in self.get_loopvars()]),
                                        call_params=self.get_params_without_types() + ", " + ','.join(self.get_loopvars()),
                                        outarray=arr,
                                        all_invariants=all_invariants,
                                        pcon_guess=pcon_guess[arr],
                                        candidate_accesses=candidate_accesses,
                                        int_params=[x[0] for x in self.inputs if x[1]=="int"] + self.get_loopvars(),
                                        float_params=[(x[1],x[0]) for x in self.inputs if x[1]=="double" or x[1]=="float"],
                                        arraynames=arraynames,
                                        loopvar=self.get_loopvars())
        return ret


class SketchGeneratorLevel12(SketchGeneratorLevel11):
    def generate_generators(self, gen_template_name="templates/generators/12.mako", common_template_name="templates/generators/common2.mako"):
        """
        Generates the generators for the RHS for the invariant/postcondition.
        """
        from mako.template import Template
        import re
        common_template = Template(filename=common_template_name)
        gen_template = Template(filename=gen_template_name)

        # find candidate expressions for array LDs
        candidates = ArrLDFinder().find(self.program, self.get_loopvars())
        filtered_candidates = list(set(map(tree_to_str, candidates)))
        print "Candidate expressions for array LDs: ", filtered_candidates

        ret = common_template.render(loopvar=self.get_loopvars(),
                                     int_params=[x[0] for x in self.inputs if x[1]=="int"] + self.get_loopvars(),
                                     array_sz_candidates = filtered_candidates,
                                     arrays=[x[0] for x in self.inputs if re.search("\[", x[1])])


        # find candidate array accesses
        candidate_accesses = SketchGeneratorLevel5.FindAccesses().find(self.program, self.get_loopvars())
        print "Candidate array accesses: ", candidate_accesses

        # interpret the loop nest to find the overall structure
        import interpret

        inputs = [x for x in self.inputs if x[0] not in self.get_out_array()]
        outputs = [x for x in self.inputs if x[0] in self.get_out_array()]

        print "Interpreter inputs:", inputs
        print "Interpreter outputs:", outputs
        interpreter_result = interpret.Interpreter(inputs, outputs).interpret(self.program)
        pcon_guess = interpret.Guesser(inputs, outputs).guess_postcondition(interpreter_result)
        print pcon_guess


        # compute aggregates across all loops
        all_invariants = {}
        for invariant in self.invariant_names_to_loops.keys():
            node = self.invariant_names_to_loops[invariant]
            thiskey = loop_key(node)
            var = node.iter_var.name
            all_invariants[thiskey] = var

        for arr in self.get_out_array():
            # we want all the arrays that are not output
            # this is because even if we use the output arrays in a RAW manner, we want to
            # construct our conditions in terms of the inputs
            arraynames = [x[0] for x in self.inputs if re.search("\[", x[1]) and x[0] not in self.get_out_array()]
            ret += gen_template.render(parameters=self.get_params() + ", " + ','.join(["int " + x for x in self.get_loopvars()]),
                                        call_params=self.get_params_without_types() + ", " + ','.join(self.get_loopvars()),
                                        outarray=arr,
                                        all_invariants=all_invariants,
                                        pcon_guess=pcon_guess[arr],
                                        candidate_accesses=candidate_accesses,
                                        int_params=[x[0] for x in self.inputs if x[1]=="int"] + self.get_loopvars(),
                                        float_params=[(x[1],x[0]) for x in self.inputs if x[1]=="double" or x[1]=="float"],
                                        arraynames=arraynames,
                                        loopvar=self.get_loopvars())
        return ret

    def find_dependent_loopvars(self):
        """
        For each output array, find which loopvars it depends on.
        """
        class DependenceFinder(ast_tools.NodeVisitor):
            def __init__(self, outputs, loopvars):
                super(DependenceFinder, self).__init__()
                self.outputs = outputs
                self.loopvars = loopvars
                self.dependences = {}
                for x in self.outputs:
                    self.dependences[x] = []
                self.in_lhs = False
                self.in_arr_access = None

            def visit_Block(self, node):
                map(self.visit, node.body)

            def visit_AssignExp(self, node):
                self.in_lhs = True
                self.visit(node.lval)
                self.in_lhs = False
                self.visit(node.rval)

            def visit_ArrExp(self, node):
                if self.in_lhs:
                    self.in_arr_access = node.name.name
                    self.visit(node.loc)
                    self.in_arr_access = None

            def visit_VarNode(self, node):
                if self.in_lhs and self.in_arr_access and node.name in self.loopvars:
                    self.dependences[self.in_arr_access].append(node.name)

        df = DependenceFinder(self.get_out_array(), self.loopvars)
        df.visit(self.program)
        print "DEPNDENT LOOP VARS: ", df.dependences
        self.dependent_loopvars = df.dependences

    def find_loopvar_nesting(self):
        """
        Find the nesting structure for the loops.
        Returns loop->[containing loops] dict.
        """
        self.loopvar_nesting = {}
        for lv in self.get_loopvars():
            self.loopvar_nesting[lv] = []
        for inv in self.invariant_names_to_loops.keys():
            node = self.invariant_names_to_loops[inv]
            thisnodevar = node.iter_var.name
            for x in self.get_containing_loop_invs(node):
                print thisnodevar, "contained by ", x[1].iter_var.name
                self.loopvar_nesting[thisnodevar].append(x[1].iter_var.name)
        print "LOOPVAR NESTING: ", self.loopvar_nesting

    def find_output_nesting(self):
        """
        Creates a structure to map from output->innermost loop.
        """
        class OutputNestFinder(ast_tools.NodeVisitor):
            def __init__(self, outputs):
                self.outputs = outputs
                self.cur_loopvar = None
                self.output_nesting = {}

            def visit_Block(self, node):
                map(self.visit, node.body)

            def visit_WhileLoop(self, node):
                old_loopvar = self.cur_loopvar
                self.cur_loopvar = node.iter_var.name
                self.visit(node.body)
                self.cur_loopvar = old_loopvar

            def visit_AssignExp(self, node):
                if self.cur_loopvar and isinstance(node.lval, ArrExp):
                    self.output_nesting[node.lval.name.name] = self.cur_loopvar
        onf = OutputNestFinder(self.get_out_array())
        onf.visit(self.program)
        print "OUTPUT NESTING: ", onf.output_nesting
        self.output_nesting = onf.output_nesting

    def generate_invariant_funcs(self):
        """
        Generate the sketch function for the invariant.
        """
        from mako.template import Template
        #inv_template = Template(filename="templates/invariant/2.mako")
        inv_template = Template(filename="templates/invariant/3.mako")
        ret = ""
        print "IN generate_invariant_funcs()"

        invariant_gen = InvariantGenerator(self.program, self.inputs, self.get_out_array(), self.loopvars,
            self.invariant_names_to_loops, self.get_loopvar_mins(), self.get_loopvar_maxs())

        invariant_gen.find_dependent_loopvars()
        self.dependent_loopvars = invariant_gen.dependent_loopvars
        invariant_gen.find_loopvar_nesting()
        self.loopvar_nesting = invariant_gen.loopvar_nesting
        invariant_gen.find_output_nesting()
        self.output_nesting = invariant_gen.output_nesting
        invariant_info = {}
        for inv in self.invariant_names_to_loops.keys():
            invariant_info[inv] = invariant_gen.generate_invariant(
                self.invariant_names_to_loops[inv].iter_var.name,
                inv)
        print invariant_info

        # OLD
        # for invariant in self.invariant_names_to_loops.keys():
        #     #FIXME
        #     looplevel = 0
        #     node = self.invariant_names_to_loops[invariant]
        #     thiskey = loop_key(node)
        #     var = node.iter_var.name
        #     containing_loop_invs = self.get_containing_loop_invs(node)
        #     # we need to also know which loops this loop contains
        #     thisloopcontains = self.get_loops_contained_by(node)
        #     ret += inv_template.render(name=invariant,
        #                                looplevel=looplevel,
        #                                output_nesting=self.output_nesting,
        #                                containing_loop_invs=containing_loop_invs,
        #                                parameters=self.get_params(),
        #                                int_params=[x[0] for x in self.inputs if x[1]=="int"] + self.get_loopvars(),
        #                                call_params=self.get_params_without_types(),
        #                                outarray=self.get_out_array(),
        #                                thisloopvar=var,
        #                                thiskey=thiskey,
        #                                thisloopcontains=thisloopcontains,
        #                                loopvar=self.get_loopvars(),
        #                                per_loop_mins=self.get_per_loop_mins(),
        #                                per_loop_maxs=self.get_per_loop_maxs(),
        #                                mins=self.get_loopvar_mins(),
        #                                maxs=self.get_loopvar_maxs(),
        #                                loopvar_nesting=self.loopvar_nesting,
        #                                dependent_loopvars=self.dependent_loopvars,
        #                                recursion_limit=self.recursion_limit)
        # NEW
        for invariant in self.invariant_names_to_loops.keys():
            #FIXME
            looplevel = 0
            node = self.invariant_names_to_loops[invariant]
            thiskey = loop_key(node)
            var = node.iter_var.name
            containing_loop_invs = self.get_containing_loop_invs(node)
            # we need to also know which loops this loop contains
            thisloopcontains = self.get_loops_contained_by(node)
            ret += inv_template.render(name=invariant,
                                       looplevel=looplevel,
                                       invariant_info=invariant_info[invariant],
                                       output_nesting=self.output_nesting,
                                       containing_loop_invs=containing_loop_invs,
                                       parameters=self.get_params(),
                                       int_params=[x[0] for x in self.inputs if x[1]=="int"] + self.get_loopvars(),
                                       call_params=self.get_params_without_types(),
                                       outarray=self.get_out_array(),
                                       thisloopvar=var,
                                       thiskey=thiskey,
                                       thisloopcontains=thisloopcontains,
                                       loopvar=self.get_loopvars(),
                                       per_loop_mins=self.get_per_loop_mins(),
                                       per_loop_maxs=self.get_per_loop_maxs(),
                                       mins=self.get_loopvar_mins(),
                                       maxs=self.get_loopvar_maxs(),
                                       loopvar_nesting=self.loopvar_nesting,
                                       dependent_loopvars=self.dependent_loopvars,
                                       recursion_limit=self.recursion_limit)
        print ret
        return ret

    def generate_postcon_func(self):
        """
        Generate the sketch function for the postcondition.
        """
        from mako.template import Template
        pcon_template = Template(filename="templates/postcondition/2.mako")
        return pcon_template.render(parameters=self.get_params(),
                                    call_params=self.get_params_without_types(),
                                    outarray=self.get_out_array(),
                                    int_params=[x[0] for x in self.inputs if x[1]=="int"] + self.get_loopvars(),
                                    loopvar=self.get_loopvars(),
                                    mins=self.get_loopvar_mins(),
                                    maxs=self.get_loopvar_maxs(),
                                    loopvar_nesting=self.loopvar_nesting,
                                    dependent_loopvars=self.dependent_loopvars,
                                    output_nesting=self.output_nesting,
                                    recursion_limit=self.recursion_limit)

class SketchGeneratorLevel13(SketchGeneratorLevel12):
    pass

# The levels correspond to:
# 1: Addition of points only, and only consider offset in one dimension at a time
# 2: Addition of points only, and consider full offset^dim points
# 3: 1, with multiplication in lexicographic order (TODO)
# 4: 2, with multiplication in lexicographic order (TODO)
# 5: Addition of points only, guess points based on code, include weights
# 6: 5, with multiplication / division
# 7: 6, but limit multiplications to lexicographic ordering (TODO)
# 11: use interpreter plus guessed points
# 12: use interpreter, try to work with mixed dimensionality
# 13: try to fix bugs in 12 without screwing anything up

SketchGeneratorLevels = {'1': SketchGenerator, '2': SketchGeneratorLevel2,
        '5': SketchGeneratorLevel5, '6': SketchGeneratorLevel6,
        '7': SketchGeneratorLevel7,
        '11': SketchGeneratorLevel11,
        '12': SketchGeneratorLevel12,
        '13': SketchGeneratorLevel13}
