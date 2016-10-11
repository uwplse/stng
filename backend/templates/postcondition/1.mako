<%
  loopvars_with_types = ', '.join(["int "+x for x in loopvar])
  loopvars_with_types += ', ' + ', '.join(["int "+x+"_p" for x in loopvar])
  loopvars_without_types = ', '.join(["_"+x for x in loopvar])
  loopvars_without_types_no_ = ', '.join([x for x in loopvar])
  loopvars_with_types_for_gen = ', '.join(["int "+x for x in loopvar])
  int_params_with_ = map(lambda x: "_"+x if x in loopvar else x, int_params)
%>
<%doc>
boolean postcondition(${parameters}, ${loopvars_with_types}) {
  boolean ret = true;
% for lvar in loopvar:
  for (int _${lvar}=1; _${lvar}<${lvar}; _${lvar}++)
% endfor
    if (!(${outarray}[lhs(N, ${loopvars_without_types})]==gen(${call_params}, ${loopvars_without_types})))
      ret = false;

  return ret;
}
</%doc>

% for arr in outarray:
double gen_${arr}_postcondition(${parameters}, ${loopvars_with_types_for_gen}, int _limit) {
  return gen_${arr}(${call_params}, ${loopvars_without_types_no_}, _limit);
}
% endfor 

boolean postcondition(${parameters}, ${loopvars_with_types}) {
  boolean ret = true;
% for lvar in loopvar:
  int _${lvar} = ${lvar}_p;
% endfor
% for lvar in loopvar:
  if (_${lvar}>=${mins[lvar]} && _${lvar}<${maxs[lvar]})
% endfor
  {
  % for arr in outarray:
    if (!(${arr}[idx_${arr}(${','.join(int_params_with_)})]==gen_${arr}_postcondition(${call_params}, ${loopvars_without_types}, ${recursion_limit})))
      ret = false;
  % endfor
  }

  return ret;
}
