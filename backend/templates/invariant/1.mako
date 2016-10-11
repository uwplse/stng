<%
  loopvars_with_types = ', '.join(["int "+x for x in loopvar])
  loopvars_without_types = ', '.join(["_"+x for x in loopvar])
  import copy
  temp = copy.deepcopy(loopvar)
  loopvars_without_types_no_ = ', '.join(temp)
  int_params_with_ = map(lambda x: "_"+x if x in loopvar else x, int_params)
  import stencil_ir as g
  import generate_sketch as gs
%>
boolean ${name}(${parameters}, ${loopvars_with_types}) {
  // short-circuit if we're out of valid loop range
  if (
    % for x in range(len(loopvar)):
      ${loopvar[x]} < ${mins[loopvar[x]]} ||
      ${loopvar[x]} > ${maxs[loopvar[x]]} ||
    % endfor
     false) { return false; }
  boolean ret = true;

  // check invariants for outer loops
  % for i in containing_loop_invs:
  ret = ret && ${i[0]}(${call_params}, ${loopvars_without_types_no_});
  % endfor

  ## loops before this one
  % for i in containing_loop_invs:
  <%
    v = i[1].iter_var.name
  %>
   ## for (int _{loopvar[i]}={loopvar[i]}; _{loopvar[i]}<={loopvar[i]}; _{loopvar[i]}++)
  for (int _${v}=${v}; _${v}<=${v}; _${v}++)
  % endfor
  ## this loop
   ## for (int _${loopvar[looplevel]}=${mins[loopvar[looplevel]]}; _${loopvar[looplevel]}<${loopvar[looplevel]}; _${loopvar[looplevel]}++)
  <%
    thisloopmin = g.tree_to_str(per_loop_mins[thiskey])
  %>
  for (int _${thisloopvar}=${thisloopmin}; _${thisloopvar} < ${thisloopvar}; _${thisloopvar}++) {
  ## loops after this one
  % for i in thisloopcontains:
  <%
    v = i[1].iter_var.name
    vmin = g.tree_to_str(per_loop_mins[gs.loop_key(i[1])])
    vmax = g.tree_to_str(per_loop_maxs[gs.loop_key(i[1])])
  %>
   ##for (int _${loopvar[i]}=${mins[loopvar[i]]}; _${loopvar[i]}<${maxs[loopvar[i]]}; _${loopvar[i]}++)
  for (int _${v}=${vmin}; _${v}<${vmax}; _${v}++) {


  {
  % for arr in outarray:
    if (!(${arr}[idx_${arr}(${','.join(int_params_with_)})]==gen_${arr}_${thisloopvar}_${thiskey}(${call_params}, ${loopvars_without_types}, ${recursion_limit})))
      ret = false;
  % endfor
  }
 } //thisloopcontains
% endfor
## if this is the lowest level loop
  % if len(thisloopcontains) == 0:
  {
  % for arr in outarray:
    if (!(${arr}[idx_${arr}(${','.join(int_params_with_)})]==gen_${arr}_${thisloopvar}_${thiskey}(${call_params}, ${loopvars_without_types}, ${recursion_limit})))
      ret = false;
  % endfor
  }
  % endif

} // thisloop
  return ret;
}


<%
  loopvars_with_types = ', '.join(["int "+x for x in loopvar])
  loopvars_with_types += ', ' + ', '.join(["int "+x+"_p" for x in loopvar])
  loopvars_without_types = ', '.join(["_"+x for x in loopvar])
  import copy
  temp = copy.deepcopy(loopvar)
  temp += [x+"_p" for x in loopvar]
  loopvars_without_types_no_ = ', '.join(temp)
%>

boolean ${name}__2(${parameters}, ${loopvars_with_types}) {
  boolean ret = true;

  // check invariants for outer loops
  % for i in containing_loop_invs:
  ret = ret && ${i[0]}__2(${call_params}, ${loopvars_without_types_no_});
  % endfor

  % for i in loopvar:
  int _${i} = ${i}_p;
  % endfor

  ## loops before this one
  % for i in containing_loop_invs:
  <%
    v = i[1].iter_var.name
  %>
  if (_${v}>=${v} && _${v}<=${v})
  % endfor
  ## this loop
  <%
    thisloopmin = g.tree_to_str(per_loop_mins[thiskey])
  %>
  if (_${thisloopvar}>=${thisloopmin} && _${thisloopvar}<${thisloopvar}) {
  ## loops after this one
  % for i in thisloopcontains:
  <%
    v = i[1].iter_var.name
    vmin = g.tree_to_str(per_loop_mins[gs.loop_key(i[1])])
    vmax = g.tree_to_str(per_loop_maxs[gs.loop_key(i[1])])
  %>
   ##if (_${loopvar[i]}>=${mins[loopvar[i]]} && _${loopvar[i]}<${maxs[loopvar[i]]})
   if (_${v}>=${vmin} && _${v}<${vmax})

  {
  % for arr in outarray:
    if (!(${arr}[idx_${arr}(${','.join(int_params_with_)})]==gen_${arr}_${thisloopvar}_${thiskey}(${call_params}, ${loopvars_without_types}, ${recursion_limit})))
      ret = false;
  % endfor
  }
  % endfor
  ## if this is the lowest level loop
    % if len(thisloopcontains) == 0:
    {
    % for arr in outarray:
      if (!(${arr}[idx_${arr}(${','.join(int_params_with_)})]==gen_${arr}_${thisloopvar}_${thiskey}(${call_params}, ${loopvars_without_types}, ${recursion_limit})))
        ret = false;
    % endfor
    }
    % endif
  } //thisloop
  return ret;
}
