import unittest
from backend_cpp import *

class SimpleTests(unittest.TestCase):
    def test_1d(self):
        import parse_ir
        a = parse_ir.statement.parseString("a[i] = b[i-1]")[0]
        inputs = [("N","int"), ("b", "double [N]"), ("a", "double [N]")]
        print CppBackend(a, inputs, ["i"]).generate()


if __name__ == '__main__':
    unittest.main()
