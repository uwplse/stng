% for arr in arrays:
int idx_${arr}(${','.join(["int "+x for x in int_params])}) {
  return idxgen(${','.join(int_params)});
}
% endfor

int max(int a, int b) {
  if (a>b)
    return a;
  else
    return b;
}

generator int idxgen(${','.join(["int "+x for x in int_params])}) {
  generator int sz() {
  % if array_sz_candidates:
    int z = ${array_sz_candidates[0]};
  % for cand in array_sz_candidates[1:]:
    if (??) z = ${cand};
  % endfor
  % endif
    return z;
  <%
    non_lvars = [x for x in int_params if x not in loopvar]
  %>
  %if non_lvars:
    int start = ${non_lvars[0]};
    int end = ${non_lvars[0]};
    % for x in non_lvars[1:]:
    % if loop.first:
    if (??) { start = ${x}; }
    % else:
    else if (??) { start = ${x}; }
    % endif
    % endfor

    % for x in non_lvars[1:]:
    % if loop.first:
    if (??) { end = ${x}; }
    % else:
    else if (??) { end = ${x}; }
    % endif
    % endfor

    % endif


    if (??) { start = start - ??; }
    else if (??) { start = start + ??; }
    if (??) { end = end - ??; }
    else if (??) { end = end + ??; }

    return end-start;
  }

   <%
    import itertools
    lhs_possibilities = []
    for p in itertools.permutations(loopvar):
      lhs_p = "(99+" + p[0] +")"
      for pp in p[1:]:
        lhs_p += "+ (sz() * (%s" % pp
      for pp in p[1:]:
        lhs_p += "))"
      lhs_possibilities += [lhs_p]
  %>
int lhsval = ${lhs_possibilities[0]};
% for x in lhs_possibilities[1:]:
if (??) { lhsval = ${x}; }
% endfor
return lhsval;

}
<%doc>
generator int lhs(int N, ${','.join(["int "+x for x in loopvar])}) {
  <%
    import itertools
    lhs_possibilities = []
    for p in itertools.permutations(loopvar):
      lhs_p = p[0]
      for pp in p[1:]:
        lhs_p += "+ (N * (%s" % pp
      for pp in p[1:]:
        lhs_p += "))"
      lhs_possibilities += [lhs_p]
  %>
int lhsval = ${lhs_possibilities[0]};
% for x in lhs_possibilities[1:]:
if (??) { lhsval = ${x}; }
% endfor
return lhsval;
}
</%doc>
