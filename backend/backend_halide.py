import logging
from stencil_ir import *
import assertion_to_sketch
import asp.codegen.ast_tools as ast_tools
import parse_ir

class IndexDesugar(ast_tools.NodeVisitor):
    class NFinder(ast_tools.NodeVisitor):
        def __init__(self, name_to_find):
            super(ast_tools.NodeVisitor, self).__init__()
            self.found = False
            self.name_to_find = name_to_find
        def visit_VarNode(self, node):
            if node.name == self.name_to_find:
                self.found = True
        def find(self, node):
            self.visit(node)
            return self.found

    def __init__(self):
        super(ast_tools.NodeVisitor,self).__init__()
        self.expr = []
    def desugar(self, node):
        self.visit(node)
        return self.expr
    def visit_VarNode(self, node):
        logging.debug("in visit_varnode: %s", node.name)
        # need this for 1D
        self.expr.append(node)
        return
    def visit_BinExp(self, node):
        #FIXME: obviously need to not just be "N"
        if node.op == "+" and isinstance(node.right, ag.BinExp) and node.right.op == "*":
            logging.debug("%s",  "1" + " adding " + ag.tree_to_str(node.left))
            self.expr.append(node.left)
            self.visit(node.right)
            return
        if node.op == "+" and isinstance(node.left, ag.BinExp) and node.left.op == "*":
            logging.debug("%s", "2" + " adding " + ag.tree_to_str(node.right))
            self.expr.append(node.right)
            self.visit(node.left)
            return
        if isinstance(node.left, ag.VarNode) and node.left.name == "N":
            if not IndexDesugar.NFinder("N").find(node.right):
                logging.debug("%s", "3" + " adding " + ag.tree_to_str(node.right))
                self.expr += [node.right]
            else:
                self.visit(node.right)
            return
        if isinstance(node.right, ag.VarNode) and node.right.name == "N":
            if not IndexDesugar.NFinder("N").find(node.right):
                logging.debug("%s", "4" + " adding " + ag.tree_to_str(node.left))
                self.expr += [node.left]
            else:
                self.visit(node.right)
            return
        self.visit(node.left)
        self.visit(node.right)

class IndexResugar(object):
    def __init__(self, funcdict, loopvars, inputs):
        self.funcdict = funcdict
        self.loopvars = loopvars
        self.inputs = inputs
    def need_to_rev(self, func):
        """
        Try to see if we are in unit stride order already.
        If not, reverse our order.
        """
        import sympy
        base = sympy.sympify(func)
        plus1 = sympy.sympify(func)
        for lv in self.loopvars:
            base = base.subs(lv, "1")
        plus1 = plus1.subs(self.loopvars[0], "2")
        for lv in self.loopvars[1:]:
            plus1 = base.subs(lv, "1")
        if plus1 == base+1:
            return False
        else:
            return True

    def dimension_reduce(self, arrname, loc):
        """
        If loc is an expression with zeros, and arrname is lower
        dimension than the length of loc, reduce the dimension to
        match.
        """
        def is_int(i):
            if i[0] == '-':
                return i[1:].isdigit()
            return i.isdigit()

        import re
        dim = -1
        for i in self.inputs:
            if i[0] == arrname:
                match = re.split("\*", i[1])
                dim = len(match)
        logging.debug("loc is length %s and dim is %s for %s", len(loc), dim, arrname)
        logging.debug("%s", loc)
        if len(loc) > dim:
            loc = map(lambda x:'0' if is_int(x) else x, loc)
            loc.remove('0')
        return loc


    def resugar(self, arrname, loc):
        import sympy
        import itertools
        #FIXME: we can't assume dimensionality == loopvars
        logging.debug("*** Resugaring %s %s into %s", arrname, self.funcdict["idx_" + arrname], tree_to_str(loc))
        candidates = []
        candidates += itertools.product([x for x in range(-2,2)], repeat=len(self.loopvars))
        logging.info("Evaluating resugaring candidates (this could take a while).....")
        logging.debug("looking for loc %s", tree_to_str(loc))
        logging.debug("and index function is %s", self.funcdict["idx_"+arrname])
        for pt in candidates:
            # evaluate at pt
            logging.debug("Evaluating at %s", pt)
            e = self.funcdict["idx_"+arrname]
            need_to_rev = self.need_to_rev(e)
            e = sympy.sympify(e)
            c = []
            # first evaluate lv[i]+pt[i]
            for i in range(len(self.loopvars)):
                lv = self.loopvars[i]
                c += ["%s + %s" % (lv, pt[i])]
                e = e.subs(lv, lv + "+%s" % pt[i])
            if e == sympy.sympify(tree_to_str(loc)):
                logging.debug("found: %s", e,tree_to_str(loc))
                if need_to_rev:
                    return (",".join(reversed([str(sympy.sympify(x)) for x in c])), True)
                else:
                    return (",".join([str(sympy.sympify(x)) for x in c]), False)
            # evaluate the same, except set one of the indices to 0
            #e = self.funcdict["idx_"+arrname]
            #e = sympy.sympify(e)
            #c = []
            #for i in range(len(self.loopvars)):
                #lv = self.loopvars[i]
                #c += ["%s + %s" % (lv, pt[i])]
                #e = e.subs(lv, lv + "+%s" % pt[i])
            #for j in range(len(self.loopvars)):
                #new_e = e.subs(self.loopvars[j], "0")
                #print "checking ", self.loopvars[j], "=0"
                #new_c = [x for x in c]
                #new_c[j] = "0"
                #print "check ", new_e, "==", sympy.sympify(tree_to_str(loc))
                #if new_e == sympy.sympify(tree_to_str(loc)):
                    #print "found: ", new_e,tree_to_str(loc)
                    #if need_to_rev:
                        #return (",".join(reversed([str(sympy.sympify(x)) for x in new_c])), True)
                    #else:
                        #return (",".join([str(sympy.sympify(x)) for x in new_c]), False)



            e = self.funcdict["idx_"+arrname]
            need_to_rev = self.need_to_rev(e)
            rev_e = sympy.sympify(e)
            e = sympy.sympify(e)
            for which in range(len(self.loopvars)):
                c = []
                for i in range(len(self.loopvars)):
                    if which == i:
                        c += ["%s" % pt[i]]
                    else:
                        c += ["%s__" % self.loopvars[i]]
                    e = e.subs(self.loopvars[i], c[i])
                    rev_e = rev_e.subs(self.loopvars[len(self.loopvars)-i-1], c[i])
                for lv2 in self.loopvars:
                    e = e.subs(lv2+"__", lv2)
                    rev_e = rev_e.subs(lv2+"__", lv2)
                    c = map(lambda x:x if x!=lv2+"__" else lv2, c)

                simpified_loc = sympy.sympify(tree_to_str(loc))
                match = False
                if e == simpified_loc:
                    logging.debug("match found: %s", c)
                    c = self.dimension_reduce(arrname, c)
                    return (",".join([str(sympy.sympify(x)) for x in c]), False)
                if rev_e == simpified_loc:
                    logging.debug("match found: %s", c)
                    c = self.dimension_reduce(arrname, c)
                    return (",".join([str(sympy.sympify(x)) for x in c]), True)


 #           print "BEGIN PHASE 2"
            #for which in range(len(self.loopvars)):
                #c = []
                #for i in range(len(self.loopvars)):
                    #lv = self.loopvars[i]
                    #rev_lv = self.loopvars[len(self.loopvars)-i-1]
                    #print "lv,rev_lv", lv, rev_lv
                    #if which == i:
                        #print "which == i"
                        #c += ["%s" % pt[i]]
                    #else:
                        #print "which != i"
                        #c += ["%s" % lv]
                    #print "subsing ", lv, c[i]
                    #print "and for rev, subsing ", rev_lv, c[i]
                    #rev_e = rev_e.subs(rev_lv, c[i])
                    #e = e.subs(lv, c[i])
                #print c, e, rev_e, sympy.sympify(tree_to_str(loc))
                #if rev_e == sympy.sympify(tree_to_str(loc)):
                    #print "DAMMIT FOUND"
                #if e == sympy.sympify(tree_to_str(loc)):
                    #print "found: ", e,tree_to_str(loc)
                    #c = self.dimension_reduce(arrname, c)
                    #if need_to_rev:
                        #return (",".join(reversed([str(sympy.sympify(x)) for x in c])), True)
                    #else:
                        #return (",".join([str(sympy.sympify(x)) for x in c]), False)


class GatherOutputArrays(ast_tools.NodeVisitor):
    def __init__(self):
        self.out_arrays = []
    def get_out_arrays(self, node):
        self.visit(node)
        return list(set(self.out_arrays))
    def visit_Block(self, node):
        map(self.visit, node.body)
    def visit_AssignExp(self, node):
        if isinstance(node.lval, ArrExp):
            self.out_arrays.append(node.lval.name.name)
        else:
            print node.lval

class ToHalide(assertion_to_sketch.ToSketch):
    def __init__(self, invariants, loopvars, inputs):
        self.invariants = invariants
        self.loopvars = loopvars
        self.inputs = inputs
    def visit_ArrExp(self, node):
        logging.debug("visiting %s", ag.tree_to_str(node))
        logging.debug("resugar:  %s", node.name.name, tree_to_str(node.loc))
        idx_expression,self.should_reverse = IndexResugar(self.invariants, self.loopvars, self.inputs).resugar(node.name.name, node.loc)
        logging.debug("idx expression is:  %s", idx_expression)
        return "%s(%s)" % (self.visit(node.name), idx_expression)

class HalideBackend(object):
    def __init__(self, program, invariants, inputs, loopvars, fname="halide_stencil"):
        self.program = program
        self.invariants = invariants
        self.inputs = inputs
        self.loopvars = loopvars
        self.fname = fname

    def generate(self):
        from mako.template import Template
        cpp_template = Template(filename="templates/halide/halide_aot.cpp.mako")
        scalar_inputs, inputs, outputs = self.get_inputs_and_outputs()
        logging.debug("inputs: %s", inputs)
        logging.debug("scalar inputs: %s", scalar_inputs)
        logging.debug("outputs: %s", outputs)
        logging.debug("invariants: %s", self.invariants)

        logging.debug("LHS looking for %s", outputs)
        logging.debug("invariants has the following keys: %s", self.invariants.keys())
        pcon = ["%s[%s] = %s" % (x, self.invariants["lhs_idx_"+x], self.invariants["gen_"+x+"_postcondition"]) for x in outputs]
        logging.debug( "postcondition: %s", pcon)
        counter = 0
        for x in pcon:
            logging.debug("%s", counter)
            counter += 1
            logging.debug("%s", x)
            logging.debug("%s", parse_ir.statement.parseString(x)[0])
        pcon = [parse_ir.statement.parseString(x)[0] for x in pcon]

        test_should_reverse = ToHalide(self.invariants, self.loopvars, self.inputs)
        test_should_reverse.visit(pcon[0])
        self.should_reverse = test_should_reverse.should_reverse

        return cpp_template.render(loopvars=self.loopvars,
                                   stencil=map(ToHalide(self.invariants,self.loopvars,self.inputs).visit,pcon),
                                   inputs=inputs,
                                   should_reverse=self.should_reverse,
                                   scalar_inputs=scalar_inputs,
                                   outputs=outputs,
                                   fname=self.fname)

    def get_inputs_and_outputs(self):
        import re

        # outputs are Expr's
        logging.debug("tree is: %s", self.program)
        outputs = GatherOutputArrays().get_out_arrays(self.program)

        # inputs are ImageParams
        #inputs = [x[0] for x in self.inputs if x[0] not in outputs and "["
        #        in x[1]]
        inputs = [x for x in self.inputs if x[0] not in outputs and "["
                in x[1]]

        # scalar_inputs are just scalars
        scalar_inputs = [x for x in self.inputs if x[0] not in outputs and x not in inputs and "__float" not in x[0]]

        return (scalar_inputs, inputs, outputs)
