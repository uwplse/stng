import unittest
from backend_halide import *
import assertion_grammar as ag


class ConversionTests(unittest.TestCase):
    @unittest.skip("deprecated")
    def test_1d(self):
        import parse_ir
        a = parse_ir.statement.parseString("a[i] = b[i-1]")[0]
        a = ag.to_ag_tree(a)
        inputs = [("N","int"), ("b", "double [N]"), ("a", "double [N]")]
        #print HalideBackend(a, inputs, ["i"]).generate()
        print ToHalide(a).to_str()

    @unittest.skip("deprecated")
    def test_2d_and_3d(self):
        import parse_ir
        a = parse_ir.statement.parseString("a[i+N*j] = b[(i-1)+N*j]")[0]
        a = ag.to_ag_tree(a)
        inputs = [("N","int"), ("b", "double [N]"), ("a", "double [N]")]
        #print HalideBackend(a, inputs, ["i"]).generate()
        print ToHalide(a).to_str()
        a = parse_ir.statement.parseString("a[i+N*(j+1+N*k)] = b[i+N*(j+N*(k-1))]")[0]
        a = ag.to_ag_tree(a)
        print ToHalide(a).to_str()

    @unittest.skip("deprecated")
    def test_1d2(self):
        import parse_ir
        a = parse_ir.statement.parseString("a[i] = b[i-1]")[0]
        a = ag.to_ag_tree(a)
        inputs = [("N","int"), ("b", "double [N]"), ("a", "double [N]")]
        print HalideBackend(a, inputs, ["i"]).generate()
#        print ToHalide(a).to_str()


if __name__ == '__main__':
    unittest.main()
