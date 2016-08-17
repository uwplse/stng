import unittest
from parse_ir import *
from grammar import *

class ParserTests(unittest.TestCase):
    def test_num_and_var(self):
        tst = "hello"
        result = varnode.parseString(tst)
        self.assertEqual("hello", result[0].name)

        tst = "33"
        result = numnode.parseString(tst)
        self.assertEqual(33, result[0].val)

    def test_binexp(self):
        tst = "i + 1"
        result = binexp.parseString(tst)
        print "binexp test: result is ", result[0]
        self.assertEqual("i", result[0].left.name)

        tst = "i + 1 + 2"
        result = binexp.parseString(tst)
        print result
        assert(type(result[0].left) == BinExp)
        self.assertEqual(tst, tree_to_str(result[0]))

        tst = "4 + i + 1 + 2"
        result = binexp.parseString(tst)
        print result
        assert(type(result[0].left) == BinExp)

        tst = "4 + (2 + 3)"
        result = binexp.parseString(tst)
        assert(type(result[0].right) == BinExp)
        print tree_to_str(result[0].right)


    def test_arrexp(self):
        tst = "a[i]"
        result = exp.parseString(tst)
        self.assertEqual("a[i]", tree_to_str(result[0]))
        tst = "a[i] + b[i]"
        result = exp.parseString(tst)
        self.assertEqual("a[i] + b[i]", tree_to_str(result[0]))

    def test_assignexp(self):
        tst = "a = 1"
        result = assignexp.parseString(tst)
        self.assertEqual("a = 1", tree_to_str(result[0]))

    def test_block(self):
        tst = "a = a - 1\na = a + 1"
        result = block.parseString(tst)
        self.assertEqual(tst, tree_to_str(result[0]))

    def test_while(self):
        tst = "while {i,i<1} { i = i + 1 }"
        result = whileexp.parseString(tst)
        self.assertEqual("while (i < 1) do {i = i + 1}", tree_to_str(result[0]))

    def test_real(self):
        tst = "i=0\nwhile {i, i<5} { a[i] = a[i-1]\ni = i + 1 }"
        result = block.parseString(tst)
        print result[0].body
        print tree_to_str(result[0])


if __name__=='__main__':
  unittest.main()
