from stencil_ir import *
from verify import *
from assertion_to_sketch import *
import asp.codegen.ast_tools as ast_tools

def loop_key(node):
    import hashlib
    return hashlib.sha224(tree_to_str(node)).hexdigest()[0:10]

class InvariantInfo(object):
    """
    This contains all the information needed to construct the
    invariant for a given loop.  Consumers of this object use
    it to generate an invariant in the given language.
    """
    def __init__(self, id):
        self.id = id
        self.invariants_to_call = []
        self.clauses = []

    def add_invariant_to_call(self, inv_id):
        if inv_id not in self.invariants_to_call:
            self.invariants_to_call.append(inv_id)

    def add_clause(self, clause):
        self.clauses.append(clause)


class InvariantGenerator(object):
    """
    This class is responsible for generating the structures
    necessary to generate the actual invariants themselves.
    """
    def __init__(self, program, inputs, outputs, loopvars, invariant_names_to_loops,
                 loopvar_mins, loopvar_maxs):
        """
        program is the AST of the loop nest to process.
        inputs is a dict mapping names to (Sketch) types (most importantly for arrays).
        """
        self.program = program
        print tree_to_str(program)
        self.inputs = inputs
        self.loopvars = loopvars
        self.loopvar_mins = loopvar_mins
        self.loopvar_maxs = loopvar_maxs
        self.outputs = outputs
        self.recursion_limit = 8
        self.containing_loop_invs = {}
        self.per_loop_mins = {}
        self.per_loop_maxs = {}
        self.invariant_names_to_loops = invariant_names_to_loops

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

        df = DependenceFinder(self.outputs, self.loopvars)
        df.visit(self.program)
        print "DEPNDENT LOOP VARS: ", df.dependences
        self.dependent_loopvars = df.dependences

    def find_loopvar_nesting(self):
        """
        Find the nesting structure for the loops.
        Returns loop->[containing loops] dict.
        """
        self.loopvar_nesting = {}
        for lv in self.loopvars:
            self.loopvar_nesting[lv] = []
        for inv in self.invariant_names_to_loops.keys():
            node = self.invariant_names_to_loops[inv]
            thisnodevar = node.iter_var.name
            for x in self.get_containing_loop_invs(node):
                print thisnodevar, "contained by ", x[1].iter_var.name
                self.loopvar_nesting[thisnodevar].append(x[1].iter_var.name)
        print "LOOPVAR NESTING: ", self.loopvar_nesting

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
        onf = OutputNestFinder(self.outputs)
        onf.visit(self.program)
        print "OUTPUT NESTING: ", onf.output_nesting
        self.output_nesting = onf.output_nesting

    #### Here's the new code ####
    def find_previous_sibling_loops(self, loopvar, loop_id):
        """
        Find loops at the same loop level as loop_id, but that occur prior
        to loop_id.
        """
        previous_siblings = []
        # a loop is a sibling loop if its parent is the same as my parent
        containing_loops = self.get_containing_loop_invs(self.invariant_names_to_loops[loop_id])
        if containing_loops:
            siblings = set()
            parent = containing_loops[-1]
            for i,conts in self.containing_loop_invs.items():
                if i != loop_id and parent in conts and conts[-1] == parent:
                    siblings.add(i)
            print "Siblings for ", loop_id, ":", siblings
            # now check if the sibling occurs before this loop in our mutual
            # parent
            if len(siblings) == 0:
                return previous_siblings
            parent_node = parent[1]
            my_loc = list(parent_node.body.body).index(self.invariant_names_to_loops[loop_id])
            for sibling in siblings:
                if my_loc > list(parent_node.body.body).index(self.invariant_names_to_loops[sibling]):
                    previous_siblings.append(sibling)
            print "Previous siblings: ", previous_siblings
        return previous_siblings

    def add_clause_for_sibling(self, sibling_id, invariant_info):
        ranges = {}
        # for all loops that contain the sibling loop, we only consider
        # the current value of that loop variable.
        sibling_loopvar = self.invariant_names_to_loops[sibling_id].iter_var.name
        for containing_var in self.loopvar_nesting[sibling_loopvar]:
            ranges[containing_var] = [containing_var, containing_var+"+1"]

        # for the sibling loop, we consider all values in the range
        # of that loop variable
        ranges[sibling_loopvar] = [self.loopvar_mins[sibling_loopvar],
                                   self.loopvar_maxs[sibling_loopvar]]

        # finally, add all outputs that are in the sibling loop
        outputs_in_loop = [x for x in self.dependent_loopvars.keys() if sibling_loopvar in self.dependent_loopvars[x]]

        invariant_info.add_clause((ranges, outputs_in_loop))

    def generate_invariant(self, loopvar, loop_id):
        inv_info = InvariantInfo(loop_id)
        # the containing loop's invariant must be True
        # note that this is only the next level up (since that
        # one will call higher level ones if necessary)
        if self.get_containing_loop_invs(self.invariant_names_to_loops[loop_id]) == []:
            # this is the outermost loop, so we need to add a special-case
            # clause here.  the clause here should be from lv_min to lv
            # for the outermost loop var, and the full ranges for the other
            # loopvars.
            # We should generate a clause per output that is a child of this
            # loop.
            ranges = {}
            for lv,outers in self.loopvar_nesting.items():
                if lv == loopvar:
                    # this is the outermost loop
                    ranges[lv] = [self.loopvar_mins[lv], lv]
                elif loopvar in outers:
                    ranges[lv] = [self.loopvar_mins[lv], self.loopvar_maxs[lv]]

        else:
            # not the outermost loop, so we need to call the invariant for the
            # containing loop
            containing_loop = self.containing_loop_invs[loop_id][-1]
            inv_info.add_invariant_to_call(containing_loop[0])
            print inv_info.invariants_to_call

            # deal with sibling loops that occur before this loop at the
            # same nesting level
            previous_siblings = self.find_previous_sibling_loops(loopvar, loop_id)
            for sibling in previous_siblings:
                self.add_clause_for_sibling(sibling, inv_info)

            # now add clauses for current iteration
            ranges = {}

            # for all containing loop variables, the range is just the
            # current value of the containing loop variables
            for lv in self.loopvar_nesting[loopvar]:
                ranges[lv] = [lv,lv+"+1"]

            # for this loop variable, the range is from min to current value
            ranges[loopvar] = [self.loopvar_mins[loopvar], loopvar]

            # for the loop variables corresponding to child loops of this loop,
            # it is the entire range
            contained_loopvars = [x for x in self.loopvar_nesting.keys() if loopvar in self.loopvar_nesting[x]]
            print "This loop contains: ", contained_loopvars
            for lv in contained_loopvars:
                ranges[lv] = [self.loopvar_mins[lv], self.loopvar_maxs[lv]]
        print ranges
        outputs_in_loop = [x for x in self.dependent_loopvars.keys() if loopvar in self.dependent_loopvars[x]]
        inv_info.add_clause((ranges, outputs_in_loop))
        print "Final clauses for ", loop_id, ": ", inv_info.clauses
        return inv_info
