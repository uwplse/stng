import unittest
from grammar import *
from verify import *
import assertion_grammar as ag

class TestVerification(unittest.TestCase):
    def test_while(self):
#        Verifier(tst_ast)
        pass

class TestWPC(unittest.TestCase):
    def test_trivial(self):
        tst_ast = NumNode(4)
        self.assertTrue(WeakestPrecondition(tst_ast, True, []).get())
        tst_ast = VarNode("i")
        self.assertTrue(WeakestPrecondition(tst_ast, True, []).get())

    def test_assignment(self):
        tst_ast = AssignExp(VarNode("i"), NumNode(3))
        q = ag.BinExp(ag.VarNode("i"), '<', ag.NumNode(10))

        self.assertEqual("(3 < 10)", ag.tree_to_str(WeakestPrecondition(tst_ast, q, []).get()))

    def test_assignment_sequence(self):
        tst_ast = Block([AssignExp(VarNode("i"), NumNode(3)),
                         AssignExp(VarNode("b"), VarNode("i"))])
        q = ag.BinExp(ag.VarNode("b"), '<', ag.NumNode(10))

        self.assertEqual("(3 < 10)", ag.tree_to_str(WeakestPrecondition(tst_ast, q, []).get()))

    def test_array_assignment(self):
        tst_ast = AssignExp(ArrExp(VarNode("i"), NumNode(0)), NumNode(3))
        q = ag.BinExp(ag.ArrExp(ag.VarNode("i"), ag.NumNode(0)), '<', ag.NumNode(10))

        self.assertEqual("(i{0:=3}[0] < 10)", ag.tree_to_str(WeakestPrecondition(tst_ast, q, []).get()))

    def test_complicated_array_assignment(self):
        tst_ast = AssignExp(ArrExp(VarNode("x"), NumNode(0)), ArrExp(VarNode("x"), NumNode(3)))
        q = ag.BinExp(ag.ArrExp(ag.VarNode("x"), ag.NumNode(0)), '<', ag.NumNode(10))

        self.assertEqual("(x{0:=x[3]}[0] < 10)", ag.tree_to_str(WeakestPrecondition(tst_ast, q, []).get()))

        tst_ast = AssignExp(ArrExp(VarNode("x"), VarNode("i")), ArrExp(VarNode("x"), NumNode(3)))
        q = ag.BinExp(ag.ArrExp(ag.VarNode("x"), ag.NumNode(0)), '<', ag.NumNode(10))

        self.assertEqual("(x{i:=x[3]}[0] < 10)", ag.tree_to_str(WeakestPrecondition(tst_ast, q, []).get()))

        tst_ast = AssignExp(ArrExp(VarNode("x"), VarNode("i")), ArrExp(VarNode("y"), VarNode("i")))
        q = ag.BinExp(ag.ArrExp(ag.VarNode("x"), ag.NumNode(0)), '<', ag.NumNode(10))

        self.assertEqual("(x{i:=y[i]}[0] < 10)", ag.tree_to_str(WeakestPrecondition(tst_ast, q, []).get()))

    def test_multiple_array_assignment(self):
        tst_ast = Block([AssignExp(ArrExp(VarNode("x"), NumNode(0)), NumNode(3)),
                         AssignExp(ArrExp(VarNode("x"), VarNode("i")), NumNode(4))])
        q = ag.BinExp(ag.ArrExp(ag.VarNode("x"), ag.NumNode(0)), '<', ag.NumNode(10))

        self.assertEqual("(x{0:=3}{i:=4}[0] < 10)", ag.tree_to_str(WeakestPrecondition(tst_ast, q, []).get()))

    def test_sequence_array_assignment(self):
        tst_ast = Block([AssignExp(ArrExp(VarNode("x"), NumNode(0)), NumNode(3)),
                         AssignExp(ArrExp(VarNode("y"), VarNode("i")), ArrExp(VarNode("x"), NumNode(0)))])
        q = ag.BinExp(ag.ArrExp(ag.VarNode("y"), ag.NumNode(0)), '<', ag.NumNode(10))
        self.assertEqual("(y{i:=x{0:=3}[0]}[0] < 10)", ag.tree_to_str(WeakestPrecondition(tst_ast, q, []).get()))


    def test_conditional(self):
        tst_ast = IfExp(BinExp(VarNode("i"), '<', NumNode(1)),
                        Block([AssignExp(VarNode("i"), NumNode(3))]),
                        Block([NumNode(1)]))
        q = ag.BinExp(ag.VarNode("i"), '<', ag.NumNode(10))
        wp = WeakestPrecondition(tst_ast, q, [])
        allcond = ag.tree_to_str(wp.get_with_additional_conditions())
        print "COND", allcond
        self.assertEqual("((!((i < 1))) -> ((i < 10)) && ((i < 1)) -> ((3 < 10)))", allcond)

    def test_block(self):
        tst_ast = Block(body=[AssignExp(VarNode("i"), NumNode(3)),
                              VarNode("i")])
        q = ag.BinExp(ag.VarNode("i"), '<', ag.NumNode(10))

        self.assertEqual("(3 < 10)", ag.tree_to_str(WeakestPrecondition(tst_ast, q, []).get()))

    #def test_while(self):
        #tst_ast = Block([AssignExp(VarNode("i"), NumNode(1)),
                        #WhileLoop(VarNode("i"), BinExp(VarNode("i"), '<', NumNode(3)),
                                  #Block([AssignExp(VarNode("i"), BinExp(VarNode("i"), '+', NumNode(1)))]))])
        #q = ag.BinExp(ag.VarNode("i"), '==', ag.NumNode(3))

##        print tree_to_str(tst_ast)

        #precon = WeakestPrecondition(tst_ast, q)
        #answer = precon.get_with_additional_conditions()
##        print ag.tree_to_str(answer)
        #self.assertEqual("(I(i) && i < 3) -> (I(i + 1)) && (I(i) && !(i < 3)) -> (i == 3) && I(1)",
                         #ag.tree_to_str(answer))

class TestComplicatedLoop(unittest.TestCase):
    def test_loop(self):
        print "in test_loop."
        tst_ast = Block([AssignExp(VarNode("i"), NumNode(1)),
                        WhileLoop(VarNode("i"), BinExp(VarNode("i"), '<', NumNode(3)),
                                  Block([AssignExp(ArrExp(VarNode("a"), VarNode("i")), 
                                                   ArrExp(VarNode("a"), BinExp(VarNode("i"), '+', NumNode(1)))),
                                         AssignExp(VarNode("i"), BinExp(VarNode("i"), '+', NumNode(1)))]))])
        #print tree_to_str(tst_ast)
        q = ag.CallExp(ag.VarNode("postcondition"), [ag.VarNode("a")])

        precon = WeakestPrecondition(tst_ast, q, [])

        print "HMMM:", precon.additional_conditions
        print "====="
        print ag.tree_to_str(precon.get_with_additional_conditions())
        print "====="

    def test_2d_loop(self):
        print "in test_2d_loop."
        tst_ast2 = Block([AssignExp(VarNode("i"), NumNode(1)),
                        WhileLoop(VarNode("i"), BinExp(VarNode("i"), '<', NumNode(3)),
                                  Block([AssignExp(VarNode("j"), NumNode(1)),
                                         WhileLoop(VarNode("j"), BinExp(VarNode("j"), '<', NumNode(4)),
                                         Block([AssignExp(ArrExp(VarNode("a"), BinExp(VarNode("i"), '+',
                                                                                      BinExp(VarNode("j"), '*', VarNode("N")))), 
                                                   ArrExp(VarNode("b"), BinExp(BinExp(VarNode("i"), '+', NumNode(1)), 
                                                       "+", BinExp(VarNode("j"), '*', VarNode("N"))))),
                                         AssignExp(VarNode("j"), BinExp(VarNode("j"), '+', NumNode(1)))])),
                                         AssignExp(VarNode("i"), BinExp(VarNode("i"), '+', NumNode(1)))]))])
        print tree_to_str(tst_ast2)
        q = ag.CallExp(ag.VarNode("postcondition"), [ag.VarNode("a")])
        precon = WeakestPrecondition(tst_ast2, q, [])
        print "HMMM:", precon.additional_conditions

        print "----"
        print ag.tree_to_str(precon.get_with_additional_conditions())
        print "----"

    def test_conditional_in_loop(self):
        tst_ast = Block([AssignExp(VarNode("i"), NumNode(1)),
                       WhileLoop(VarNode("i"), BinExp(VarNode("i"), '<', NumNode(3)),
                                 Block([IfExp(BinExp(VarNode("i"), '<', NumNode(2)),
                                              Block([AssignExp(ArrExp(VarNode("a"), VarNode("i")), 
                                              ArrExp(VarNode("b"), BinExp(VarNode("i"), '+', NumNode(1))))]),
                                              Block([AssignExp(ArrExp(VarNode("a"), VarNode("i")), 
                                              ArrExp(VarNode("b"), BinExp(VarNode("i"), '-', NumNode(1))))])),
                                        AssignExp(VarNode("i"), BinExp(VarNode("i"), '+', NumNode(1)))]))])
        q = ag.BinExp(ag.VarNode("i"), '<', ag.NumNode(10))
        wp = WeakestPrecondition(tst_ast, q, [])
        allcond = ag.tree_to_str(wp.get_with_additional_conditions())
        print tree_to_str(tst_ast)
        print "BIGCOND", allcond

if __name__ == '__main__':
    unittest.main()


