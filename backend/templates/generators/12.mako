
% for key in all_invariants.keys():
<% lv = all_invariants[key] %>
double gen_${outarray}_${lv}_${key}(${parameters}, int _limit) {
  return gen_${outarray}(${call_params}, _limit);
}
% endfor


generator double gen_${outarray}(${parameters}, int _limit) {

% for a in candidate_accesses.keys():
generator int ptgen_${a}() {
% for pt in candidate_accesses[a]:
<%
idxcall_params = ','.join([z for z in int_params if z not in loopvar] + pt)
%>
% if loop.last:
return ${"idx_%s(%s)" % (a, idxcall_params)};
% else:
if (??) return ${"idx_%s(%s)" % (a, idxcall_params)};
% endif
% endfor
}
% endfor

return ${pcon_guess};
}


<%doc>
generator double gen_${outarray}(${parameters},int _limit) {
   generator double wt(double a) {
    double ret = a;
    if (??) ret = 0.0;
    else if (??) ret = -a;
    % for x in float_params:
    if (??) ret = ret * ${x[1]};
    else if (??) ret = ret / ${x[1]};
    % endfor
    return ret;
  }
  <%
    arracc_possibilities = []
    for x in candidate_accesses.keys():
      for idx in candidate_accesses[x]:
        if x not in arraynames:
          continue
        idxcall_params =','.join([z for z in int_params if z not in loopvar] + idx)
        arracc_possibilities += ["%s[idx_%s(%s)]" % (x,x,idxcall_params)]
  %>
  double arracc = 0.0;
  % for acc in arracc_possibilities:
  arracc = arracc + wt(${acc});
  % endfor
  % if len(arracc_possibilities) == 0:
  arracc = arracc + wt(1.0);
  % endif
  return arracc;
}
</%doc>
