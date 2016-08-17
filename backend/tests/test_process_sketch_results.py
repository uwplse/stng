import unittest
from process_sketch_results import *

class TestIdxParsing(unittest.TestCase):
    def test_parsing(self):
        tc1 = """void idx_node_mass_pre (int x_max, int x_min, int y_max, int y_min, int k, int j, ref int _out)/*a3.sk:142*/
{
  _out = 0;
  _out = (99 + k) + (((y_max + 2) - (y_min - 3)) * j);
  return;
}"""
        result =  IdxParser(tc1).interpret("idx_node_mass_pre(a,b,c,d,_k,_j,_out_37)")
        self.assertEqual(result, "_out_37 = 0\n_out_37 = _j*(c - d + 5) + _k + 99\n")
        result =  IdxParser(tc1).interpret("idx_node_mass_pre(a, b, c,d,_k,_j, _out_37)")
        self.assertEqual(result, "_out_37 = 0\n_out_37 = _j*(c - d + 5) + _k + 99\n")

class TestFullExample(unittest.TestCase):
    def test_full(self):
        tc2 = """void gen_node_mass_pre_postcondition (ref double[1000] node_flux, ref double[1000] node_mass_post, ref double[1000] node_mass_pre, int x_max, int x_min, int y_max, int y_min, int k, int j, int _limit, ref double _out)/*a3.sk
:109*/
{
  _out = 0.0;
  assert (_limit > 0); //Assert at a3.sk:189 (2365095157446817455)
  int acc_s33 = 0;
  idx_node_flux(x_max, x_min, y_max, y_min, k, j, acc_s33);
  int acc_s35 = 0;
  idx_node_mass_post(x_max, x_min, y_max, y_min, k, j, acc_s35);
  double arracc_s29 = node_mass_post[acc_s35];
  int _limit_0 = _limit - 1;
  assert (_limit_0 > 0); //Assert at a3.sk:189 (-240272354471628473)
  int acc_s33_0 = 0;
  idx_node_flux(x_max, x_min, y_max, y_min, k, j, acc_s33_0);
  double arracc_s29_0 = node_flux[acc_s33_0];
  assert ((_limit_0 - 1) > 0); //Assert at a3.sk:189 (107965870416579323)
  int acc_s33_1 = 0;
  idx_node_flux(x_max, x_min, y_max, y_min, k - 1, j, acc_s33_1);
  double arracc_s29_1 = node_flux[acc_s33_1];
  _out = arracc_s29 + (arracc_s29_0 - arracc_s29_1);
  return;
}
/*a3.sk:136*/

void idx_node_flux (int x_max, int x_min, int y_max, int y_min, int k, int j, ref int _out)/*a3.sk:136*/
{
  _out = 0;
  _out = (99 + k) + (((y_max + 3) - (y_min - 2)) * j);
  return;
}
/*a3.sk:139*/

void idx_node_mass_post (int x_max, int x_min, int y_max, int y_min, int k, int j, ref int _out)/*a3.sk:139*/
{
  _out = 0;
  _out = (99 + k) + (((y_max + 2) - (y_min - 3)) * j);
  return;
}
/*a3.sk:142*/

void idx_node_mass_pre (int x_max, int x_min, int y_max, int y_min, int k, int j, ref int _out)/*a3.sk:142*/
{
  _out = 0;
  _out = (99 + k) + (((y_max + 2) - (y_min - 3)) * j);
  return;
}"""
        result = SketchResultProcessor(tc2).interpret()
        print result

    def test_huge(self):
        tc3 = """/* BEGIN PACKAGE ANONYMOUS*/
/*a3.sk:67*/

void I_j (ref double[1000] node_flux, ref double[1000] node_mass_post, ref double[1000] node_mass_pre, int x_max, int x_min, int y_max, int y_min, int k, int j, ref bit _out)/*a3.sk:67*/
{
  _out = 0;
  _out = 1;
  bit _pac_sc_s59_s61 = 0;
  I_k(node_flux, node_mass_post, node_mass_pre, x_max, x_min, y_max, y_min, k, j, _pac_sc_s59_s61);
  _out = _pac_sc_s59_s61;
  for(int _k = k; _k <= k; _k = _k + 1)/*Canonical*/
  {
    for(int _j = x_min; _j < j; _j = _j + 1)/*Canonical*/
    {
      int _out_s63 = 0;
      idx_node_mass_pre(x_max, x_min, y_max, y_min, _k, _j, _out_s63);
      double _out_s65 = 0.0;
      gen_node_mass_pre_j(node_flux, node_mass_post, node_mass_pre, x_max, x_min, y_max, y_min, _k, _j, 8, _out_s65);
      if(!((node_mass_pre[_out_s63]) == _out_s65))/*a3.sk:76*/
      {
        _out = 0;
      }
    }
  }
  return;
}
/*a3.sk:87*/

void I_j2 (ref double[1000] node_flux, ref double[1000] node_mass_post, ref double[1000] node_mass_pre, int x_max, int x_min, int y_max, int y_min, int k, int j, int k_p, int j_p, ref bit _out)/*a3.sk:87*/
{
  _out = 0;
  _out = 1;
  bit _pac_sc_s46_s48 = 0;
  I_k2(node_flux, node_mass_post, node_mass_pre, x_max, x_min, y_max, y_min, k, j, k_p, j_p, _pac_sc_s46_s48);
  _out = _pac_sc_s46_s48;
  if((k_p >= k) && (k_p <= k))/*a3.sk:96*/
  {
    if((j_p >= x_min) && (j_p < j))/*a3.sk:97*/
    {
      int _out_s50 = 0;
      idx_node_mass_pre(x_max, x_min, y_max, y_min, k_p, j_p, _out_s50);
      double _out_s52 = 0.0;
      gen_node_mass_pre_j(node_flux, node_mass_post, node_mass_pre, x_max, x_min, y_max, y_min, k_p, j_p, 8, _out_s52);
      if(!((node_mass_pre[_out_s50]) == _out_s52))/*a3.sk:99*/
      {
        _out = 0;
      }
    }
  }
  return;
}
/*a3.sk:26*/

void I_k (ref double[1000] node_flux, ref double[1000] node_mass_post, ref double[1000] node_mass_pre, int x_max, int x_min, int y_max, int y_min, int k, int j, ref bit _out)/*a3.sk:26*/
{
  _out = 0;
  _out = 1;
  for(int _k = y_min - 1; _k < k; _k = _k + 1)/*Canonical*/
  {
    for(int _j = x_min; _j < (x_max + 1); _j = _j + 1)/*Canonical*/
    {
      int _out_s56 = 0;
      idx_node_mass_pre(x_max, x_min, y_max, y_min, _k, _j, _out_s56);
      double _out_s58 = 0.0;
      gen_node_mass_pre_k(node_flux, node_mass_post, node_mass_pre, x_max, x_min, y_max, y_min, _k, _j, 8, _out_s58);
      if(!((node_mass_pre[_out_s56]) == _out_s58))/*a3.sk:35*/
      {
        _out = 0;
      }
    }
  }
  return;
}
/*a3.sk:46*/

void I_k2 (ref double[1000] node_flux, ref double[1000] node_mass_post, ref double[1000] node_mass_pre, int x_max, int x_min, int y_max, int y_min, int k, int j, int k_p, int j_p, ref bit _out)/*a3.sk:46*/
{
  _out = 0;
  _out = 1;
  if((k_p >= (y_min - 1)) && (k_p < k))/*a3.sk:54*/
  {
    if((j_p >= x_min) && (j_p < (x_max + 1)))/*a3.sk:55*/
    {
      int _out_s23 = 0;
      idx_node_mass_pre(x_max, x_min, y_max, y_min, k_p, j_p, _out_s23);
      double _out_s25 = 0.0;
      gen_node_mass_pre_k(node_flux, node_mass_post, node_mass_pre, x_max, x_min, y_max, y_min, k_p, j_p, 8, _out_s25);
      if(!((node_mass_pre[_out_s23]) == _out_s25))/*a3.sk:57*/
      {
        _out = 0;
      }
    }
  }
  return;
}
/*a3.sk:1*/

void _main (ref double[1000] node_flux, ref double[1000] node_mass_post, ref double[1000] node_mass_pre, int x_max, int x_min, int y_max, int y_min, int k, int j, int k_p, int j_p)  implements main_spec/*a3.sk:1*/
{
  double[1000] arr_6ebacd963b57b2b0 = node_mass_pre;
  arr_6ebacd963b57b2b0[99 + (k + (((y_max + 3) - (y_min - 2)) * j))] = ((node_mass_post[99 + (k + (((y_max + 3) - (y_min - 2)) * j))]) - (node_flux[99 + ((k - 1) + (((y_max + 3) - (y_min - 2)) * j))])) + (node_flux[99 + (k + (((y_max + 3) - (y_min - 2)) * j))]);
  bit _pac_sc_s0_s2 = 0;
  I_k(node_flux, node_mass_post, node_mass_pre, x_max, x_min, y_max, y_min, k, j, _pac_sc_s0_s2);
  bit _pac_sc_s0;
  _pac_sc_s0 = _pac_sc_s0_s2;
  if(_pac_sc_s0_s2)/*a3.sk:6*/
  {
    _pac_sc_s0 = !(k < (y_max + 2));
  }
  if(_pac_sc_s0)/*a3.sk:6*/
  {
    bit _out_s4 = 0;
    postcondition(node_flux, node_mass_post, node_mass_pre, x_max, x_min, y_max, y_min, k, j, k_p, j_p, _out_s4);
    assert (_out_s4); //Assert at a3.sk:6 (2567846865267323603)
  }
  bit _pac_sc_s5_s7 = 0;
  I_j(node_flux, node_mass_post, node_mass_pre, x_max, x_min, y_max, y_min, k, j, _pac_sc_s5_s7);
  bit _pac_sc_s5;
  _pac_sc_s5 = _pac_sc_s5_s7;
  if(_pac_sc_s5_s7)/*a3.sk:8*/
  {
    _pac_sc_s5 = !(j < (x_max + 1));
  }
  if(_pac_sc_s5)/*a3.sk:8*/
  {
    bit _out_s9 = 0;
    I_k2(node_flux, node_mass_post, node_mass_pre, x_max, x_min, y_max, y_min, k + 1, j, k_p, j_p, _out_s9);
    assert (_out_s9); //Assert at a3.sk:8 (8870859163363793161)
  }
  bit _pac_sc_s10_s12 = 0;
  I_j(node_flux, node_mass_post, node_mass_pre, x_max, x_min, y_max, y_min, k, j, _pac_sc_s10_s12);
  bit _pac_sc_s10;
  _pac_sc_s10 = _pac_sc_s10_s12;
  if(_pac_sc_s10_s12)/*a3.sk:10*/
  {
    _pac_sc_s10 = j < (x_max + 1);
  }
  if(_pac_sc_s10)/*a3.sk:10*/
  {
    bit _out_s14 = 0;
    I_j2(node_flux, node_mass_post, arr_6ebacd963b57b2b0, x_max, x_min, y_max, y_min, k, j + 1, k_p, j_p, _out_s14);
    assert (_out_s14); //Assert at a3.sk:10 (1332034464418834564)
  }
  bit _pac_sc_s15_s17 = 0;
  I_k(node_flux, node_mass_post, node_mass_pre, x_max, x_min, y_max, y_min, k, j, _pac_sc_s15_s17);
  bit _pac_sc_s15;
  _pac_sc_s15 = _pac_sc_s15_s17;
  if(_pac_sc_s15_s17)/*a3.sk:12*/
  {
    _pac_sc_s15 = k < (y_max + 2);
  }
  if(_pac_sc_s15)/*a3.sk:12*/
  {
    bit _out_s19 = 0;
    I_j2(node_flux, node_mass_post, node_mass_pre, x_max, x_min, y_max, y_min, k, x_min, k_p, j_p, _out_s19);
    assert (_out_s19); //Assert at a3.sk:12 (4159904518323808406)
  }
  bit _out_s21 = 0;
  I_k2(node_flux, node_mass_post, node_mass_pre, x_max, x_min, y_max, y_min, y_min - 1, j, k_p, j_p, _out_s21);
  assert (_out_s21); //Assert at a3.sk:13 (5412252336164717534)
}
/*a3.sk:184*/

void gen_node_mass_pre_j (ref double[1000] node_flux, ref double[1000] node_mass_post, ref double[1000] node_mass_pre, int x_max, int x_min, int y_max, int y_min, int k, int j, int _limit, ref double _out)/*a3.sk:184*/
{
  _out = 0.0;
  assert (_limit > 0); //Assert at a3.sk:189 (-7957491005825348185)
  int acc_s33 = 0;
  idx_node_flux(x_max, x_min, y_max, y_min, k, j, acc_s33);
  int acc_s35 = 0;
  idx_node_mass_post(x_max, x_min, y_max, y_min, k, j, acc_s35);
  double arracc_s29 = node_mass_post[acc_s35];
  int _limit_0 = _limit - 1;
  assert (_limit_0 > 0); //Assert at a3.sk:189 (-181207746944928531)
  int acc_s33_0 = 0;
  idx_node_flux(x_max, x_min, y_max, y_min, k, j, acc_s33_0);
  double arracc_s29_0 = node_flux[acc_s33_0];
  assert ((_limit_0 - 1) > 0); //Assert at a3.sk:189 (6519001948813514308)
  int acc_s33_1 = 0;
  idx_node_flux(x_max, x_min, y_max, y_min, k - 1, j, acc_s33_1);
  double arracc_s29_1 = node_flux[acc_s33_1];
  _out = arracc_s29 + (arracc_s29_0 - arracc_s29_1);
  return;
}
/*a3.sk:181*/

void gen_node_mass_pre_k (ref double[1000] node_flux, ref double[1000] node_mass_post, ref double[1000] node_mass_pre, int x_max, int x_min, int y_max, int y_min, int k, int j, int _limit, ref double _out)/*a3.sk:181*/
{
  _out = 0.0;
  assert (_limit > 0); //Assert at a3.sk:189 (-3679688864780935717)
  int acc_s33 = 0;
  idx_node_flux(x_max, x_min, y_max, y_min, k, j, acc_s33);
  int acc_s35 = 0;
  idx_node_mass_post(x_max, x_min, y_max, y_min, k, j, acc_s35);
  double arracc_s29 = node_mass_post[acc_s35];
  int _limit_0 = _limit - 1;
  assert (_limit_0 > 0); //Assert at a3.sk:189 (-4891675686945072495)
  int acc_s33_0 = 0;
  idx_node_flux(x_max, x_min, y_max, y_min, k - 1, j, acc_s33_0);
  double arracc_s29_0 = node_flux[acc_s33_0];
  assert ((_limit_0 - 1) > 0); //Assert at a3.sk:189 (6598845631811604468)
  int acc_s33_1 = 0;
  idx_node_flux(x_max, x_min, y_max, y_min, k, j, acc_s33_1);
  double arracc_s29_1 = node_flux[acc_s33_1];
  _out = arracc_s29 - (arracc_s29_0 - arracc_s29_1);
  return;
}
/*a3.sk:109*/

void gen_node_mass_pre_postcondition (ref double[1000] node_flux, ref double[1000] node_mass_post, ref double[1000] node_mass_pre, int x_max, int x_min, int y_max, int y_min, int k, int j, int _limit, ref double _out)/*a3.sk:109*/
{
  _out = 0.0;
  assert (_limit > 0); //Assert at a3.sk:189 (2365095157446817455)
  int acc_s33 = 0;
  idx_node_flux(x_max, x_min, y_max, y_min, k, j, acc_s33);
  int acc_s35 = 0;
  idx_node_mass_post(x_max, x_min, y_max, y_min, k, j, acc_s35);
  double arracc_s29 = node_mass_post[acc_s35];
  int _limit_0 = _limit - 1;
  assert (_limit_0 > 0); //Assert at a3.sk:189 (-240272354471628473)
  int acc_s33_0 = 0;
  idx_node_flux(x_max, x_min, y_max, y_min, k, j, acc_s33_0);
  double arracc_s29_0 = node_flux[acc_s33_0];
  assert ((_limit_0 - 1) > 0); //Assert at a3.sk:189 (107965870416579323)
  int acc_s33_1 = 0;
  idx_node_flux(x_max, x_min, y_max, y_min, k - 1, j, acc_s33_1);
  double arracc_s29_1 = node_flux[acc_s33_1];
  _out = arracc_s29 + (arracc_s29_0 - arracc_s29_1);
  return;
}
/*a3.sk:136*/

void idx_node_flux (int x_max, int x_min, int y_max, int y_min, int k, int j, ref int _out)/*a3.sk:136*/
{
  _out = 0;
  _out = (99 + k) + (((y_max + 3) - (y_min - 2)) * j);
  return;
}
/*a3.sk:139*/

void idx_node_mass_post (int x_max, int x_min, int y_max, int y_min, int k, int j, ref int _out)/*a3.sk:139*/
{
  _out = 0;
  _out = (99 + k) + (((y_max + 2) - (y_min - 3)) * j);
  return;
}
/*a3.sk:142*/

void idx_node_mass_pre (int x_max, int x_min, int y_max, int y_min, int k, int j, ref int _out)/*a3.sk:142*/
{
  _out = 0;
  _out = (99 + k) + (((y_max + 2) - (y_min - 3)) * j);
  return;
}
/*a3.sk:16*/

void main_spec (ref double[1000] node_flux, ref double[1000] node_mass_post, ref double[1000] node_mass_pre, int x_max, int x_min, int y_max, int y_min, int k, int j, int k_p, int j_p)/*a3.sk:16*/
{
  assume (((y_max + 2) - (y_min - 1)) > 1): "Assume at a3.sk:17"; //Assume at a3.sk:17
  assume (((x_max + 1) - x_min) > 1): "Assume at a3.sk:18"; //Assume at a3.sk:18
}
/*a3.sk:113*/

void postcondition (ref double[1000] node_flux, ref double[1000] node_mass_post, ref double[1000] node_mass_pre, int x_max, int x_min, int y_max, int y_min, int k, int j, int k_p, int j_p, ref bit _out)/*a3.sk:113*/
{
  _out = 0;
  _out = 1;
  if((k_p >= (y_min - 1)) && (k_p < (y_max + 2)))/*a3.sk:117*/
  {
    if((j_p >= x_min) && (j_p < (x_max + 1)))/*a3.sk:118*/
    {
      int _out_s67 = 0;
      idx_node_mass_pre(x_max, x_min, y_max, y_min, k_p, j_p, _out_s67);
      double _out_s69 = 0.0;
      gen_node_mass_pre_postcondition(node_flux, node_mass_post, node_mass_pre, x_max, x_min, y_max, y_min, k_p, j_p, 8, _out_s69);
      if(!((node_mass_pre[_out_s67]) == _out_s69))/*a3.sk:120*/
      {
        _out = 0;
      }
    }
  }
  return;
}"""
        result = SketchResultProcessor(tc3).interpret()
        print result

if __name__ == '__main__':
    unittest.main()
