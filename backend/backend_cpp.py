from stencil_ir import *
from assertion_to_sketch import *
import backend_halide
import parse_ir

#
# class CppBackend(object):
#     def __init__(self, tree, inputs, loopvars):
#         self.tree = tree
#         self.inputs = inputs
#         self.loopvars = loopvars
#
#     def generate(self):
#         from mako.template import Template
#         cpp_template = Template(filename="templates/cpp/serial.cpp.mako")
#         print self.tree
#         return
#         return cpp_template.render(loopvars=self.loopvars,
#                                    stencil=assertion_to_sketch.ToSketch(self.tree).to_str(),
#                                    inputs=self.get_inputs())
#         #return assertion_to_sketch.ToSketch(self.tree).to_str()
#
#     def get_inputs(self):
#         import re
#         ret = ""
#         for x in self.inputs:
#             if "[" in x[1]:
#                 tp = re.match("(\w*)\s*\[", x[1]).group(1)
#                 ret += "%s %s, " % (tp, x[0])
#             else:
#                 ret += "%s %s, " % (x[1], x[0])
#
#         ret += ",".join(["%s %s " % ("int", x) for x in self.loopvars]) + ","
#         ret += ",".join(["%s %s_start " % ("int", x) for x in self.loopvars]) + ","
#         ret += ",".join(["%s %s_end " % ("int", x) for x in self.loopvars])
#         return ret
class ToCpp(ToSketch):
    def __init__(self, invariants, loopvars, inputs):
        self.invariants = invariants
        self.loopvars = loopvars
        self.inputs = inputs
#     def visit_ArrExp(self, node):
#         print "visiting", ag.tree_to_str(node)
# #        idx_expression = ','.join(map(ag.tree_to_str,
# #            IndexResugar(self.invariants,self.loopvars).desugar(node.loc)))
#         print "resugar: ", node.name.name, tree_to_str(node.loc)
#         idx_expression,self.should_reverse = IndexResugar(self.invariants, self.loopvars, self.inputs).resugar(node.name.name, node.loc)
#         print "idx expression is: ", idx_expression
#         return "%s(%s)" % (self.visit(node.name), idx_expression)
    def simplify_access(self, node):
        import sympy
        access = tree_to_str(node)
        print access
        simplified = sympy.sympify(access)
        return str(simplified)
    def visit_ArrExp(self, node):
        return "%s[%s]" % (self.visit(node.name), self.simplify_access(node.loc))

import asp.codegen.ast_tools as ast_tools
class PostconditionSizeCounter(ast_tools.NodeVisitor):
    def __init__(self):
        super(PostconditionSizeCounter, self).__init__()
        self.counter = 0
    def get_count(self, node):
        self.counter = 0
        self.visit(node)
        return self.counter
    def visit_Block(self, node):
        map(self.visit, node.body)
    def visit(self, node):
        self.counter += 1
        self.generic_visit(node)

class CppBackend(backend_halide.HalideBackend):
    def generate(self):
        from mako.template import Template
        cpp_template = Template(filename="templates/cpp/serial.cpp.mako")
        scalar_inputs, inputs, outputs = self.get_inputs_and_outputs()
        print "inputs: ", inputs
        print "scalar inputs: ", scalar_inputs
        print "outputs: ", outputs
        print "invariants: ", self.invariants

        print "LHS looking for ", outputs
        print "invariants has the following keys: ", self.invariants.keys()
        pcon = ["%s[%s] = %s" % (x, self.invariants["lhs_idx_"+x], self.invariants["gen_"+x+"_postcondition"]) for x in outputs]
        print "postcondition: ", pcon

        counter = 0
        for x in pcon:
            print counter
            counter += 1
            print x
            print parse_ir.statement.parseString(x)[0]
        pcon = [parse_ir.statement.parseString(x)[0] for x in pcon]
        print "POSTCONDITION SIZE (without quantifiers): ", reduce(lambda x, y: x+y, map(PostconditionSizeCounter().get_count, pcon))
        # test_should_reverse = ToHalide(self.invariants, self.loopvars, self.inputs)
        # test_should_reverse.visit(pcon[0])
        # self.should_reverse = test_should_reverse.should_reverse
        self.should_reverse = True

        return cpp_template.render(loopvars=self.loopvars,
                                   stencil=map(ToCpp(self.invariants,self.loopvars,self.inputs).visit,pcon),
                                   inputs=inputs,
                                   should_reverse=self.should_reverse,
                                   scalar_inputs=scalar_inputs,
                                   outputs=outputs,
                                   fname=self.fname)
