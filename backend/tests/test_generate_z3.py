import unittest
from generate_z3 import *
from grammar import *
import pickle

class SimpleTests(unittest.TestCase):
    @unittest.skip("deprecated")
    def test_generate_consts(self):
        a = Z3Generator(None, [("N", "int"), ("arr", "int [N]"),], ["i"])
        self.assertEqual(a.generate_constants(), "(declare-const i Int)\n(declare-const i_to_check Int)\n(declare-const i_valp Int)\n(declare-const N Int)\n(declare-const arr (Array Int Int))")


    @unittest.skip("deprecated")
    def test_generate_invariant_funcs(self):
        a = Z3Generator(None, [("N", "int"), ("arr", "int [N]"), ("arr2", "int [N]")], ["i"])
        print a.generate_invariant_funcs()

    @unittest.skip("deprecated")
    def test_generate_postcondition(self):
        a = Z3Generator(None, [("N", "int"), ("arr", "int [N]"), ("arr2", "int [N]")], ["i"])
        print a.generate_postcon_func()

class RealTests(unittest.TestCase):
#    sketch_result = {'gen_node_mass_pre_k': 'node_flux[j*(y_max - y_min + 5) + k] - node_flux[j*(y_max - y_min + 5) + k - 1] + node_mass_post[j*(y_max - y_min + 5) + k]', 'gen_node_mass_pre_postcondition': 'node_flux[j*(y_max - y_min + 5) + k] - node_flux[j*(y_max - y_min + 5) + k - 1] + node_mass_post[j*(y_max - y_min + 5) + k]', 'gen_node_mass_pre_j': 'node_flux[j*(y_max - y_min + 5) + k] - node_flux[j*(y_max - y_min + 5) + k - 1] + node_mass_post[j*(y_max - y_min + 5) + k]'}
    sketch_result = {'gen_node_mass_pre_j': 'node_flux[j*(y_max - y_min + 5) + k] - node_flux[j*(y_max - y_min + 5) + k - 1] + node_mass_post[j*(y_max - y_min + 5) + k]', 'gen_node_mass_pre_k': 'node_flux[j*(y_max - y_min + 5) + k] - node_flux[j*(y_max - y_min + 5) + k - 1] + node_mass_post[j*(y_max - y_min + 5) + k]', 'gen_node_mass_pre_postcondition': 'node_flux[j*(y_max - y_min + 5) + k] - node_flux[j*(y_max - y_min + 5) + k - 1] + node_mass_post[j*(y_max - y_min + 5) + k]', 'lhs_idx_node_mass_pre': 'j*(y_max - y_min + 5) + k'}
    import parse_ir
    ir = parse_ir.parse(open("examples/cloverleaf2/advec_mom_kernel_loop98.ir", "r").read())
    loopvars,inputs = parse_ir.parse_metadata(open("examples/cloverleaf2/advec_mom_kernel_loop98.ir", "r").read())

    def test_generate_consts(self):
        a = Z3Generator(RealTests.ir, RealTests.inputs, RealTests.loopvars, RealTests.sketch_result)
        print a.generate_constants()

    def test_generate_invariant_funcs(self):
        a = Z3Generator(RealTests.ir, RealTests.inputs, RealTests.loopvars, RealTests.sketch_result)
        print a.generate_invariant_funcs()

    def test_generate_postcondition(self):
        a = Z3Generator(RealTests.ir, RealTests.inputs, RealTests.loopvars, RealTests.sketch_result)
        print a.generate_postcon_func()



class FullTests(unittest.TestCase):
    @unittest.skip("get 2d working")
    def test_full(self):
        tst_ast = Block([AssignExp(VarNode("i"), NumNode(1)),
                       WhileLoop(VarNode("i"), BinExp(VarNode("i"), '<', NumNode(3)),
                                 Block([AssignExp(ArrExp(VarNode("a"), VarNode("i")), 
                                                  ArrExp(VarNode("b"), BinExp(VarNode("i"), '+', NumNode(1)))),
                                        AssignExp(VarNode("i"), BinExp(VarNode("i"), '+', NumNode(1)))]))])
        inputs = [("N","int"), ("b", "double [N]"), ("a", "double [N]")]
        a = Z3Generator(tst_ast, inputs, ["i"])
        print a.generate()

    @unittest.skip("get 2d working")
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
        a = Z3Generator(tst_ast, inputs, ["i", "j"])
        print a.generate()

if __name__ == '__main__':
    unittest.main()
