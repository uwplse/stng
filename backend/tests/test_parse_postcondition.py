import unittest
from parse_postcondition import *
import assertion_grammar as ag
from parse_ir import *

class SimpleTests(unittest.TestCase):
    def test_single_line(self):
        result = assignexp.parseString("_pac_sc_s37_0 = volfluxx[(_j + 1) + (N * _k)]")
        self.assertEqual(tree_to_str(result[0]), "_pac_sc_s37_0 = volfluxx[((_j + 1) + (N * _k))]")

    def test_block(self):
        result = block.parseString("""_pac_sc_s37_0 = volfluxx[(_j + 1) + (N * _k)]
                                      _pac_sc_s37_1 = prevol[_j + (N * _k)]
                                      _pac_sc_s37_2 = volfluxx[_j + (N * _k)]
                                      _out_s36 = _pac_sc_s37_0 - (_pac_sc_s37_1 - (_pac_sc_s37_2 + (prevol[0])))""")
        print tree_to_str(result[0])
        expected = """_pac_sc_s37_0 = volfluxx[((_j + 1) + (N * _k))]
_pac_sc_s37_1 = prevol[(_j + (N * _k))]
_pac_sc_s37_2 = volfluxx[(_j + (N * _k))]
_out_s36 = (_pac_sc_s37_0 - (_pac_sc_s37_1 - (_pac_sc_s37_2 + prevol[0])))"""
        self.assertEqual(tree_to_str(result[0]), expected)

    def test_rhs(self):
        result = exp.parseString("""((prevol[0]) - _out_s36)))""")
        print tree_to_str(result[0])


class SimplifyTests(unittest.TestCase):
    def test_subst(self):
        rhs = ag.to_ag_tree((exp.parseString("""((prevol[0]) - _out_s36)))"""))[0])
        clauses = [ag.to_ag_tree((assignexp.parseString("""_out_s36 = 4\n"""))[0])]
        a = Simplifier(rhs).simplify(clauses)
        self.assertEqual(ag.tree_to_str(a), "(prevol[0] - 4)")

    def test_multiple_subst(self):
        clauses = block.parseString("""_pac_sc_s37_0 = volfluxx[(_j + 1) + (N * _k)]
                                      _pac_sc_s37_1 = prevol[_j + (N * _k)]
                                      _pac_sc_s37_2 = volfluxx[_j + (N * _k)]
                                      _out_s36 = _pac_sc_s37_0 - (_pac_sc_s37_1 - (_pac_sc_s37_2 + (prevol[0])))""")[0]
        rhs = exp.parseString("""((prevol[0]) - _out_s36)))""")[0]

        a = Simplifier(ag.to_ag_tree(rhs)).simplify([ag.to_ag_tree(x) for x in clauses.body])
        print ag.tree_to_str(a)



class FullTests(unittest.TestCase):
    def test_full_2d(self):
        a = """void postcondition (int N, ref double[N * N] postvol, ref double[N * N] prevol, ref double[N * N] volfluxx, int k, int j, int k_p, int j_p, ref bit _out)/*postvol-check.sk:114*/
{
  _out = 0;
  _out = 1;
  if((k_p >= 0) && (k_p < k))/*postvol-check.sk:118*/
  {
    if((j_p >= 0) && (j_p < j))/*postvol-check.sk:119*/
    {
      double arracc_s27 = prevol[j_p + (N * (k_p + 1))];
      double arracc_s27_0 = volfluxx[j_p + (N * k_p)];
      double arracc_s27_1 = prevol[j_p + (N * k_p)];
      double arracc_s27_2 = volfluxx[(j_p + 1) + (N * k_p)];
      double arracc_s27_3 = prevol[j_p + (N * (k_p + 1))];
      double genned_s29 = arracc_s27_0 + (arracc_s27_1 - (arracc_s27_2 + arracc_s27_3));
      if(!((postvol[j_p + (N * k_p)]) == (arracc_s27 + genned_s29)))/*postvol-check.sk:121*/
      {
        _out = 0;
      }
    }
  }
  return;
}"""
        p = PostconditionParser(a).get_postcondition()
        print ag.tree_to_str(p)

if __name__ == '__main__':
    unittest.main()

