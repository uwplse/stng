import unittest
from generate_sketch import *
from grammar import *

@unittest.skip("Deprecated")
class SimpleTests(unittest.TestCase):
    def test_generate_signature(self):
        a = SketchGenerator(None, [("N", "int"), ("arr", "int [N]"),], ["i"])
        self.assertEqual(a.generate_signature(), "void main(int N, ref int [N] arr, int i, int i_p)")

    def test_generate_invariant_func(self):
        a = SketchGenerator(None, [("N", "int"), ("arr", "int [N]"), ("arr2", "int [N]")], ["i"])
        print a.generate_invariant_funcs()
        #self.assertEqual(a.generate_invariant_func(),"""Something""")

    def test_generate_postcon_func(self):
        a = SketchGenerator(None, [("N", "int"), ("arr", "int [N]"), ("arr2", "int [N]")], ["i"])
        print a.generate_postcon_func()

    def test_generate_generators(self):
        a = SketchGenerator(None, [("N", "int"), ("arr", "int [N]"), ("arr2", "int [N]")], ["i"])
        print a.generate_generators()


class FullTests(unittest.TestCase):
    def test_full(self):
        tst_ast = Block([AssignExp(VarNode("i"), NumNode(1)),
                       WhileLoop(VarNode("i"), BinExp(VarNode("i"), '<', NumNode(3)),
                                 Block([AssignExp(ArrExp(VarNode("a"), VarNode("i")), 
                                                  ArrExp(VarNode("b"), BinExp(VarNode("i"), '+', NumNode(1)))),
                                        AssignExp(VarNode("i"), BinExp(VarNode("i"), '+', NumNode(1)))]))])
        inputs = [("N","int"), ("b", "double [N]"), ("a", "double [N]")]
        a = SketchGenerator(tst_ast, inputs, ["i"])
        print a.generate()

    def test_full_2d(self):
        tst_ast = Block([AssignExp(VarNode("i"), NumNode(1)),
                        WhileLoop(VarNode("i"), BinExp(VarNode("i"), '<', BinExp(VarNode("N"), '-', NumNode(1))),
                                  Block([AssignExp(VarNode("j"), NumNode(1)),
                                         WhileLoop(VarNode("j"), BinExp(VarNode("j"), '<', BinExp(VarNode("N"), '-', NumNode(1))),
                                         Block([AssignExp(ArrExp(VarNode("a"), BinExp(VarNode("i"), '+',
                                                                                      BinExp(VarNode("j"), '*', VarNode("N")))), 
                                                   ArrExp(VarNode("b"), BinExp(BinExp(VarNode("i"), '-', NumNode(1)), 
                                                       "+", BinExp(VarNode("j"), '*', VarNode("N"))))),
                                         AssignExp(VarNode("j"), BinExp(VarNode("j"), '+', NumNode(1)))])),
                                         AssignExp(VarNode("i"), BinExp(VarNode("i"), '+', NumNode(1)))]))])
        inputs = [("N","int"), ("b", "double [N*N]"), ("a", "double [N*N]")]
        a = SketchGenerator(tst_ast, inputs, ["i", "j"])
        print a.generate()
        
    def test_full_with_conditional(self):
        tst_ast = Block([AssignExp(VarNode("i"), NumNode(1)),
                       WhileLoop(VarNode("i"), BinExp(VarNode("i"), '<', NumNode(3)),
                                 Block([IfExp(BinExp(VarNode("i"), '<', NumNode(2)),
                                              Block([AssignExp(ArrExp(VarNode("a"), VarNode("i")), 
                                              ArrExp(VarNode("b"), BinExp(VarNode("i"), '+', NumNode(1))))]),
                                              Block([AssignExp(ArrExp(VarNode("a"), VarNode("i")), 
                                              ArrExp(VarNode("b"), BinExp(VarNode("i"), '-', NumNode(1))))])),
                                        AssignExp(VarNode("i"), BinExp(VarNode("i"), '+', NumNode(1)))]))])
        inputs = [("N","int"), ("b", "double [N]"), ("a", "double [N]")]
        a = SketchGenerator(tst_ast, inputs, ["i"])
        print a.generate()
        #print tree_to_str(tst_ast)


if __name__ == '__main__':
    unittest.main()
