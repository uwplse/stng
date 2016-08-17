import unittest
from interpret import *
from grammar import *
from parse_ir import *
import sympy

BIGEXAMPLE="""
#INFO: { "loopvars": ["k", "j"], "inputs": [["post_vol", "double[_N*_N]"], ["volume", "double[_N*_N]"], ["x_max", "int"], ["x_min", "int"], ["y_max", "int"], ["y_min", "int"]] }

k = (y_min - 2)
while {k, (k < (y_max + 2))}
{
j = (x_min - 2)
while {j, (j < (x_max + 2))}
{
post_vol[(j + (((x_max + 3) - (x_min - 2)) * k))] = volume[(j+1 + (((x_max + 2) - (x_min - 2)) * k))]
j = (j + 1)
}


k = (k + 1)
}
"""

class TestSmall(unittest.TestCase):
  def test_single_statement(self):
    tst = AssignExp(ArrExp(VarNode("out"), NumNode(1)),
                     ArrExp(VarNode("in"), NumNode(1)))
    
    result = Interpreter([["in", "double[_N]"]], [["out", "double[_N]"]]).interpret(tst)
    self.assertEqual(result["out"][11], sympy.sympify("in_11"))
    
  def test_with_addition(self):
    tst = AssignExp(ArrExp(VarNode("out"), NumNode(1)),
                    BinExp(ArrExp(VarNode("in"), NumNode(1)), '+', NumNode(2)))
    
    result = Interpreter([["in", "double[_N]"]], [["out", "double[_N]"]]).interpret(tst)
    self.assertEqual(result["out"][11], sympy.sympify("in_11+2"))
      
class TestLoops(unittest.TestCase):
  def test_1D_loop(self):
    tst = Block([AssignExp(VarNode("i"), NumNode(1)),
                 WhileLoop(VarNode("i"),
                           BinExp(VarNode("i"), '<', NumNode(3)),
                           Block([AssignExp(ArrExp(VarNode("out"), VarNode("i")),
                                            BinExp(ArrExp(VarNode("in"), VarNode("i")), '+', NumNode(2)))]))])
    result = Interpreter([["in", "double[_N]"]], [["out", "double[_N]"]]).interpret(tst)
    self.assertEqual(result["out"][11], sympy.sympify("in_11+2"))
    print result
    
  def test_big_example(self):
    tst = parse(BIGEXAMPLE)
    tst_metadata = parse_metadata(BIGEXAMPLE)
    result = Interpreter([["volume", "double[_N*_N]"],["x_max", "int"], ["x_min", "int"], ["y_max", "int"], ["y_min", "int"]],
                         [["post_vol", "double[_N*_N]"]]).interpret(tst)
    print result

class TestGuesser(unittest.TestCase):
  def test_1D_loop(self):
    tst = Block([AssignExp(VarNode("i"), NumNode(1)),
                 WhileLoop(VarNode("i"),
                           BinExp(VarNode("i"), '<', NumNode(3)),
                           Block([AssignExp(ArrExp(VarNode("out"), VarNode("i")),
                                            BinExp(ArrExp(VarNode("in"), VarNode("i")), '+', NumNode(2)))]))])
    result = Interpreter([["in", "double[_N]"]], [["out", "double[_N]"]]).interpret(tst)
    guess = Guesser([["in", "double[_N]"]], [["out", "double[_N]"]]).guess_postcondition(result)
    
    self.assertEqual(guess["out"], "in(ptgen_in()) + 2")

        
if __name__ == '__main__':
    unittest.main()
