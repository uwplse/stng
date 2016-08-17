from assertion_grammar import *
from assertion_to_z3 import *

import unittest

class TestIndividualNodes(unittest.TestCase):
    def test_num_and_var(self):
        a = NumNode(4)
        self.assertEqual("4", ToZ3(a).to_str())
        b = VarNode("hello")
        self.assertEqual("hello", ToZ3(b).to_str())

    def test_binexp(self):
        a = BinExp(VarNode("foo"), '+', NumNode(3))
        self.assertEqual("(+ foo 3)", ToZ3(a).to_str())

        a = BinExp(BinExp(VarNode("bar"), '-', VarNode("foo")), '+', NumNode(3))
        self.assertEqual("(+ (- bar foo) 3)", ToZ3(a).to_str())

    def test_callexp(self):
        a = CallExp(VarNode("foobar"), [NumNode(3), VarNode("y")])
        self.assertEqual("(foobar 3 y)", ToZ3(a).to_str())

    def test_notexp(self):
        a = NotExp(VarNode("y"))
        self.assertEqual("(not y)", ToZ3(a).to_str())

    def test_arrexp(self):
        a = ArrExp(VarNode("arr"), BinExp(VarNode("i"), '+', NumNode(4)))
        self.assertEqual("(select arr (+ i 4))", ToZ3(a).to_str())

    def test_augarraynode(self):
        a = AugArrayVarNode(VarNode("foo"), {VarNode("i"):NumNode(4)})
        self.assertEqual("(store foo i 4)", ToZ3(a).to_str())

        a = AugArrayVarNode(VarNode("foo"), {VarNode("i"):NumNode(4), VarNode("j"):NumNode(2)})
        self.assertEqual("(store (store foo j 2) i 4)", ToZ3(a).to_str())

        a = ArrExp(AugArrayVarNode(VarNode("foo"), {VarNode("i"):NumNode(4)}), VarNode("j"))
        self.assertEqual("(select (store foo i 4) j)", ToZ3(a).to_str())

    def test_implicationexp(self):
        a = ImplicationExp(VarNode("a"), CallExp(VarNode("foo"), [NumNode(3)]))
        self.assertEqual("(ite a (foo 3) true)", ToZ3(a).to_str())

if __name__ == '__main__':
    unittest.main()

