import logging
from stencil_ir import *
from verify import *
from assertion_to_z3 import *
import generate_sketch
import asp.codegen.ast_tools as ast_tools

def loop_key(node):
    import hashlib
    return hashlib.sha224(tree_to_str(node)).hexdigest()[0:10]

class Z3Generator(object):
    """
    Generates a Z3 script, with the parsed postcondition from the
    output of Sketch.  The output of this class is a script ready to
    send to Z3 for verification.
    """
    def __init__(self, program, inputs, loopvars, invariant):
        """
        program is the AST of the loop nest to process.
        inputs is a dict mapping names to (Sketch) types (most importantly for arrays).
        invariant is a dict mapping generated function names from sketch to strings that can be parsed by parse_ir
        """
        self.program = program
        self.inputs = inputs
        self.loopvars = loopvars
        self.loopvar_mins = {}
        self.loopvar_maxs = {}
        self.set_maxs_and_mins()
        logging.debug("Preprocessing, invariat is %s", invariant)
        self.synthesized_invariant = self.process_invariants(invariant)
        logging.debug("Synthesized invariant: %s", self.synthesized_invariant)
        self.out_array = generate_sketch.OutputArrayFinder().get_output_arrays(program)
        self.containing_loop_invs = {}

    def process_invariants(self, invariant):
        """
        Take strings in the invariant dict and convert into Z3 syntax.
        """
        from backend_halide import ToHalide
        import parse_ir
        ret = {}
        for inv_key in invariant.keys():
            ir = parse_ir.parse_expression(invariant[inv_key])

            logging.debug("loopvars are %s", self.loopvars)
            if "gen" in inv_key:
                converted_invariant = ToZ3(ir,self.loopvars,None,False,invariant,self.inputs).to_str()
                ret[inv_key] = converted_invariant
            else:
                ret[inv_key] = tree_to_str(ir)
        logging.debug("Processed invariants: ", ret)

        return ret


    def generate(self):
        """
        Top-level.  Generates an entire Z3 script for the given program and inputs.
        """
        # first, we generate the invariant & postcondition call
        postcondition = CallExp(VarNode("postcondition"),
                [VarNode(x) for x in self.get_params_without_types()]
                    + map(lambda x: VarNode(x), self.get_loopvars())
                    + map(lambda x: VarNode(x+"_p"), self.get_loopvars()))


        new_invariant_signatures = self.generate_invariant_func_signatures()
        for x in new_invariant_signatures.keys():
            logging.debug("inv: %s", tree_to_str(new_invariant_signatures[x]))
        # get verification conditions
        logging.debug("invariant signatures: %s", [tree_to_str(new_invariant_signatures[x]) for x in new_invariant_signatures.keys()])
        wpc = WeakestPrecondition(self.program, postcondition, [], invariant_call=new_invariant_signatures)
        conds = wpc.get()
        additional_conds = wpc.additional_conditions

        from generate_sketch import RHSInvariantReplacer
        conds = RHSInvariantReplacer(self.get_loopvars()).visit(conds)
        additional_conds = map(RHSInvariantReplacer(self.get_loopvars()).visit, additional_conds)


        # translate verification conditions to Z3
        logging.debug("Translating the following VCs: %s %s", tree_to_str(conds), '\n\n'.join([tree_to_str(x) for x in additional_conds]))
        vc = ToZ3(conds, self.get_loopvars(), additional_conds, True, self.synthesized_invariant, self.inputs).to_str()

        # put it all together
        ret = self.generate_invariant_funcs()
        ret += self.generate_postcon_func()
        ret += self.generate_constants() + "\n\n"
        ret += self.generate_assumptions()
        ret += self.generate_signature() + vc + "))\n\n"
        ret += "(assert (not main))\n(check-sat)\n(get-model)\n"

        return ret

    def generate_invariant_func_signatures(self):
        """
        Generates signatures for each invariant function into a dict keyed by a hash of the loop
        body.
        """
        class InvGenLoopVisitor(asp.codegen.ast_tools.NodeVisitor):
            def __init__(self, inputs, loopvars, params_without_types):
                super(InvGenLoopVisitor, self).__init__()
                self.invariants = {}
                self.invariant_names_to_loops = {} # dict from names to loops
                self.inputs = inputs
                self.loopvars = loopvars
                self.params_without_types = params_without_types

            def visit_Block(self, node):
                map(self.visit, node.body)

            def visit_WhileLoop(self, node):
                key = loop_key(node)
                invariant_name = "I_%s_%s" % (node.iter_var.name, key)
                self.invariants[key] = CallExp(VarNode(invariant_name),
                    [VarNode(x) for x in self.params_without_types] + map(lambda x: VarNode(x), self.loopvars))
                self.invariant_names_to_loops[invariant_name] = node
                self.visit(node.body)

        visitor = InvGenLoopVisitor(self.inputs, self.get_loopvars(), self.get_params_without_types())
        visitor.visit(self.program)
        self.invariant_names_to_loops = visitor.invariant_names_to_loops
        return visitor.invariants


    def generate_invariant_funcs(self):
        """
        Generates the Z3 function for the invariant.
        """

        self.find_dependent_loopvars()
        self.find_loopvar_nesting()
        self.find_output_nesting()

        from mako.template import Template
        inv_template = Template(filename="templates/z3/invariant.2.z3.mako", format_exceptions=True)
        ret = ""
        #for looplevel in range(len(self.get_loopvars())):
            #var = self.get_loopvars()[looplevel]
            #ret += inv_template.render(name="I_"+var,
                                       #looplevel=looplevel,
                                       #loopvar_maxs=self.loopvar_maxs,
                                       #loopvar_mins=self.loopvar_mins,
                                       #parameters=self.get_params(),
                                       #call_params=self.get_params_without_types(),
                                       #outarray=self.get_out_array(),
                                       #synthesized_invariant=self.get_synthesized_invariant_rhs(),
                                       #loopvar=self.get_loopvars(),
                                       #dependent_loopvars=self.dependent_loopvars,
                                       #loopvar_nesting=self.loopvar_nesting,
                                       #output_nesting=self.output_nesting)
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
                                       synthesized_invariant=self.get_synthesized_invariant_rhs(),
                                       looplevel=looplevel,
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
                                       mins=self.loopvar_mins,
                                       maxs=self.loopvar_maxs,
                                       loopvar_nesting=self.loopvar_nesting,
                                       dependent_loopvars=self.dependent_loopvars)

        return ret

    def generate_postcon_func(self):
        """
        Generate the Z3 function for the postcondition.
        """
        from mako.template import Template
        pcon_template = Template(filename="templates/z3/postcondition.z3.mako")
        return pcon_template.render(parameters=self.get_params(),
                                    call_params=self.get_params_without_types(),
                                    loopvar_maxs=self.loopvar_maxs,
                                    loopvar_mins=self.loopvar_mins,
                                    outarray=self.get_out_array(),
                                    synthesized_invariant=self.get_synthesized_invariant_rhs(),
                                    loopvar=self.get_loopvars())


    def generate_constants(self):
        """
        Generates declarations for constants at the top-level of the script.
        """
        all_params = [(x, "Int") for x in self.get_loopvars()] #+ [(x+"_to_check", "Int") for x in self.get_loopvars()]
        all_params += [(x+"_p", "Int") for x in self.get_loopvars()] + self.get_params()
        ret = "\n".join(["(declare-const %s %s)" % (x[0], x[1]) for x in all_params])
        return ret

    def get_params(self):
        """
        Returns a list of tuples of (name, type) for each input.
        """
        def is_arr(tp):
            return "[" in tp[1]
        def convert_type(tp):
            translation_dict = {"double":"Real", "int":"Int"}
            return translation_dict[tp.split()[0]]
        def convert_type_array(tp):
            scalar_tp = convert_type(tp.split("[")[0] + " ")
            ret = ""
            dim = len(tp.split("*"))
            for x in range(dim):
                ret += "(Array Int "
            ret += scalar_tp
            for x in range(dim):
                ret += ")"
            return ret
        def is_float(tp):
            return tp[1] == "double" or tp[1] == "float"
        arrs = filter(is_arr, self.inputs)
        non_arrs = filter(lambda x: not is_arr(x) and not is_float(x), self.inputs)
        floats = filter(is_float, self.inputs)
        return [(x[0], convert_type(x[1])) for x in floats] + [(x[0], "%s" % convert_type_array(x[1])) for x in arrs] + [(x[0], convert_type(x[1])) for x in non_arrs]
    def generate_signature(self):
        """
        Generate the signature for the main Z3 function.
        """
        return "(define-fun main () Bool\n(and \n"

    def generate_assumptions(self):
        """
        Generates the necessary assumptions.

        Right now, it generates, for a loopvar `i`, lower and upper bounds for `i` and `i_valp`.
        For arrays of the type `T[N]` it generates bounds for `N` such that it is greater than 3.
        """
        import asp.codegen.ast_tools
        import re
        ret = ""
        for x in self.get_loopvars():
            ret += "(assert (> (- %s %s) 1))" % (self.loopvar_maxs[x], self.loopvar_mins[x]) + "\n"

        return ret


    def get_params_without_types(self):
        #return ', '.join(["%s" % (x[0]) for x in self.inputs])
        return [x[0] for x in self.get_params()]

    def get_out_array(self):
        return self.out_array

    def get_loopvars(self):
        return self.loopvars

    def get_synthesized_invariant_rhs(self):
        #return "(select b (+ i_to_check 1))"
        #return "(select b (+ (- i_to_check 1) (* j_to_check N)))"
        return self.synthesized_invariant

    def set_maxs_and_mins(self):
        for x in self.get_loopvars():
            maxfinder = generate_sketch.MaxFinder(x)
            maxfinder.visit(self.program)
            initfinder = generate_sketch.InitFinder(x)
            initfinder.visit(self.program)
            self.loopvar_mins[x] = ToZ3(initfinder.init,None,None).to_str()
            self.loopvar_maxs[x] = ToZ3(maxfinder.maximum,None,None).to_str()

    def replace_idx_vars(self, tree):
        """
        Given an expression, replace the loopvariables `x` with `x_to_check`.
        """
        import asp.codegen.ast_tools as ast_tools
        import grammar
        import copy
        tree_copy = copy.deepcopy(tree)
        class IdxReplacer(ast_tools.NodeTransformer):
            def __init__(self, loopvars):
                self.loopvars = loopvars
            def visit_VarNode(self, node):
                if node.name in self.loopvars:
                    return grammar.VarNode(node.name+"_to_check")
                else:
                    return node
        return IdxReplacer(self.get_loopvars()).visit(tree_copy)

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
        logging.debug("Dependent loop vars: %s", df.dependences)
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
                logging.debug("%s contained by %s", thisnodevar, x[1].iter_var.name)
                self.loopvar_nesting[thisnodevar].append(x[1].iter_var.name)

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
        logging.debug("Output nesting: %s", onf.output_nesting)
        self.output_nesting = onf.output_nesting

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
            logging.debug("Containing loops: %s", visitor.containing_loops)

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
