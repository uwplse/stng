from assertion_grammar import *
from assertion_to_sketch import *

import unittest

class TestIndividualNodes(unittest.TestCase):
    def test_num_and_var(self):
        a = NumNode(4)
        self.assertEqual("4", ToSketch(a).to_str().strip())
        b = VarNode("hello")
        self.assertEqual("hello", ToSketch(b).to_str().strip())

    def test_arr(self):
        a = ArrExp(VarNode("foo"), NumNode(2))
        self.assertEqual("foo[99+2]", ToSketch(a).to_str().strip())

    def test_binop(self):
        a = BinExp(NumNode(5), '+', VarNode("num"))
        self.assertEqual("(5 + num)", ToSketch(a).to_str().strip())

    def test_assign(self):
        a = AssignExp(VarNode("num"), NumNode(5))
        self.assertEqual("num = 5;", ToSketch(a).to_str().strip())

    def test_call(self):
        a = CallExp(VarNode("foo"), [NumNode(3), VarNode("x")])
        self.assertEqual("foo(3,x)", ToSketch(a).to_str().strip())

    def test_not(self):
        a = NotExp(VarNode("x"))
        self.assertEqual("(!(x))", ToSketch(a).to_str().strip())

    def test_implication(self):
        a = ImplicationExp(VarNode("x"), VarNode("y"))
        self.assertEqual("if (x) { assert(y); }", ToSketch(a).to_str().strip())
        
    def test_nested_implication(self):
        a = ImplicationExp(VarNode("x"), ImplicationExp(VarNode("y"), VarNode("z")))
        self.assertEqual("if ((x && y)) { assert(z); }", ToSketch(a).to_str().strip())

    def test_augarray(self):
        a = AugArrayVarNode(VarNode("foo"), {VarNode("i"):NumNode(4)})
        conv = ToSketch(a)
        converted = conv.to_str()
        arr_name = conv.aug_map[tree_to_str(a)] # should not raise an error
#        print converted
#        self.assertEqual(arr_name, converted)
#        self.assertRegexpMatches(converted, r"double[N] %s = foo;\s*.*" % (arr_name))
        import re
        matchstring = arr_name + " = foo"
        assert re.search(matchstring, converted)
        #self.assertIn("double[N] %s = foo;" % arr_name, conv.decls)
        #self.assertIn("%s[i] = 4;" % arr_name, conv.decls)

class TestLargerExamples(unittest.TestCase):
#     def test_large_while(self):
#         import grammar as g
#         import verify
#         tst_ast = g.Block([g.AssignExp(g.VarNode("i"), g.NumNode(1)),
#                         g.WhileLoop(g.VarNode("i"), g.BinExp(g.VarNode("i"), '<', g.NumNode(3)),
#                                   g.Block([g.AssignExp(g.VarNode("i"), g.BinExp(g.VarNode("i"), '+', g.NumNode(1)))]))])
#         q = BinExp(VarNode("i"), '==', NumNode(3))
#         print g.tree_to_str(tst_ast)
#         precon = verify.WeakestPrecondition(tst_ast, q)
#         precon_with_conds = precon.get() #_with_additional_conditions()
#         conv = ToSketch(precon_with_conds, precon.additional_conditions)
#         print conv.to_str()
# #        print conv.get_decls()
#         ToSketch.decls = []

    def test_large_while_with_array(self):
        import grammar as g
        import verify
        tst_ast = g.Block([g.AssignExp(g.VarNode("i"), g.NumNode(1)),
                        g.WhileLoop(g.VarNode("i"), g.BinExp(g.VarNode("i"), '<', g.NumNode(3)),
                                  g.Block([g.AssignExp(g.ArrExp(g.VarNode("a"), g.VarNode("i")), 
                                                   g.ArrExp(g.VarNode("a"), g.BinExp(g.VarNode("i"), '+', g.NumNode(1)))),
                                         g.AssignExp(g.VarNode("i"), g.BinExp(g.VarNode("i"), '+', g.NumNode(1)))]))])
#        print g.tree_to_str(tst_ast)
        q = CallExp(VarNode("postcondition"), [VarNode("a")])
        precon = verify.WeakestPrecondition(tst_ast, q)
        precon_get = precon.get()
        #print tree_to_str(precon_get)
        conv = ToSketch(precon_get, precon.additional_conditions)
        result =  conv.to_str()
        print "----"
        print result

if __name__ == '__main__':
    unittest.main()
