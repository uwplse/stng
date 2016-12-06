<%
  all_params = ' '.join(["(%s %s)" % (x[0], x[1]) for x in parameters]) + " "
  all_params += ' '.join(["(%s Int)" % x for x in loopvar]) + " "
  #all_params += ' '.join(["(%s_to_check Int)" % x for x in loopvar])

  #all_params_notypes = ' '.join([x[0] for x in parameters]) + " "
  #all_params_notypes += ' '.join(["%s" % x for x in loopvar]) + " "
  #all_params_notypes += ' '.join(["%s_to_check" % x for x in loopvar])

%>

<%
  loopvars_with_types = ', '.join(["int "+x for x in loopvar])
  loopvars_without_types = ', '.join(["_"+x for x in loopvar])
  import copy
  temp = copy.deepcopy(loopvar)
  loopvars_without_types_no_ = ', '.join(temp)
  int_params_with_ = map(lambda x: "_"+x if x in loopvar else x, int_params)
  int_params_with_joined = ', '.join(int_params_with_)
  import stencil_ir as g
  import generate_sketch as gs


  def check_output(output, is_rhs_check=False):
    ret = ""
    if is_rhs_check:
      #ret += '\n'.join(["\t_%s=0;" % x for x in set(loopvar)-set(dependent_loopvars[output])]) + "\n"
      #ret += '\n'.join(["\t_%s=0;" % x for x in set(loopvar)-set([output_nesting[output]]+loopvar_nesting[output_nesting[output]])]) + "\n"
      ret += "(let ("
      ret += ' '.join(["\t(%s _%s)" % (x, x) for x in set([output_nesting[output]]+loopvar_nesting[output_nesting[output]])])
      ret += ' '.join(["\t(_%s 0)" % x for x in set(loopvar)-set([output_nesting[output]]+loopvar_nesting[output_nesting[output]])]) + "\n"
      ret += ")\n"
    else:
      #ret += '\n'.join(["\tint _%s=0;" % x for x in set(loopvar)-set(dependent_loopvars[output])]) + "\n"
      ret += "(let ("
      ret += ' '.join(["\t(%s _%s)" % (x, x) for x in set([output_nesting[output]]+loopvar_nesting[output_nesting[output]])])
      #ret += '\n'.join(["\tint _%s=0;" % x for x in set(loopvar)-set([output_nesting[output]]+loopvar_nesting[output_nesting[output]])]) + "\n"
      ret += ' '.join(["\t(_%s 0)" % x for x in set(loopvar)-set([output_nesting[output]]+loopvar_nesting[output_nesting[output]])]) + "\n"
      ret += ")\n"
    #ret += "\tif (!(%s[idx_%s(N,%s)]==gen_%s(%s, %s)))\n\t\tret = false;\n" % (output, output, loopvars_without_types, output, call_params, loopvars_without_types)
    key = "gen_%s_%s" % (output, thisloopvar)
    if key not in synthesized_invariant.keys():
      key = "gen_%s_%s" % (output, name[2:])
    #lhskey = "lhs_idx_%s" % (output,)
    def construct_select(terms):
        if len(terms) == 2:
            return "(select %s %s)" % (terms[0], terms[1])
        else:
            return "(select %s %s)" % (construct_select(terms[:-1]), terms[-1])
    lhs_sel = construct_select([output]+loopvar[::-1])
    ret += "(= %s %s)" % (lhs_sel, synthesized_invariant[key])
    ret += ")\n"
    return ret
%>

(define-fun ${name} (${all_params}) Bool
  ;short-circuit if we're out of valid loop range
  (ite (or
    % for x in range(len(loopvar)):
      % if loopvar[x] == thisloopvar:
      (> ${loopvar[x]}  ${maxs[loopvar[x]]})
      % else:
      (>= ${loopvar[x]} ${maxs[loopvar[x]]})
      % endif
    % endfor
     ) 
     false

  (forall (
  % for lv in loopvar:
    (_${lv} Int)
  % endfor
  )

  % for output in outarray:

    % if thisloopvar == output_nesting[output]:
    ;output ${output} is inside this loop
    (ite (and
    % for lv in [output_nesting[output]] + loopvar_nesting[output_nesting[output]]:
      % if lv == thisloopvar and loopvar_nesting[output_nesting[output]]:
      ;;; loop over ${lv} from ${mins[lv]} to ${maxs[lv]}
      ;for (int _${lv}=${mins[lv]}; _${lv} < ${maxs[lv]}; _${lv}++)
      (>= _${lv} ${mins[lv]}) (< _${lv} ${maxs[lv]})
      % elif lv not in dependent_loopvars[output]:
      ;;; break out of loop
      ;for (int _${lv}=0; false; )
      false
      % else:
      ;;; loop over ${lv} from ${mins[lv]} to ${lv}
      ;for (int _${lv}=${mins[lv]}; _${lv} < ${lv}; _${lv}++)
      (>= _${lv} ${mins[lv]}) (< _${lv} ${lv})
      % endif
    % endfor
      )
      ${check_output(output)}

    ;;; now deal with remaining iters
    (ite (and
    % for lv in [output_nesting[output]] + loopvar_nesting[output_nesting[output]]:
      % if lv == thisloopvar:
      ;;; loop over ${lv} from ${mins[lv]} to ${lv}
      ;for (int _${lv}=${mins[lv]}; _${lv}<${lv}; _${lv}++)
      (>= _${lv} ${mins[lv]}) (< _${lv} ${lv})
      % else:
      ;;; loop over ${lv} from ${lv} to ${lv}
      ;for (int _${lv}=${lv}; _${lv}==${lv}; _${lv}++)
      (= _${lv} ${lv})
      % endif
    % endfor
      )
      ${check_output(output)}
      true))

    % elif thisloopvar in loopvar_nesting[output_nesting[output]]:
    (ite (and
    ;;; output ${output} is in a loop that is fully contained in this loop
      % for lv in [output_nesting[output]] + loopvar_nesting[output_nesting[output]]:
        % if lv == thisloopvar:
          % if lv not in dependent_loopvars[output]:
        ;;; loop over max(${mins[lv]}, ${lv}-1) to ${lv}
        ;for (int _${lv}=max(${mins[lv]}, ${lv}-1); _${lv}<${lv}; _${lv}++)
        (>= _${lv} (max ${mins[lv]} (- ${lv} 1))) (< _${lv} ${lv})
          % else:
        ;;; loop over ${lv} from ${mins[lv]} to ${lv}
        ;for (int _${lv}=${mins[lv]}; _${lv}<${lv}; _${lv}++)
        (>= _${lv} ${mins[lv]}) (< _${lv} ${lv})
          % endif
        % else:
          % if lv not in dependent_loopvars[output]:
        ;;; loop over max(${mins[lv]}, ${lv}-1) to ${lv}
        ;for (int _${lv}=max(${mins[lv]}, ${lv}-1); _${lv}<${lv}; _${lv}++)
        (>= _${lv} (max ${mins[lv]} (- ${lv} 1))) (< _${lv} ${lv})
          % elif lv in loopvar_nesting[thisloopvar]:
        ;;; loop over ${lv} from ${mins[lv]} to ${lv}
        ;for (int _${lv}=${mins[lv]}; _${lv}<${lv}; _${lv}++)
        (>= _${lv} ${mins[lv]}) (< _${lv} ${lv})
          % else:
        ;;; loop over ${lv} from ${mins[lv]} to ${maxs[lv]}
        ;for (int _${lv}=${mins[lv]}; _${lv}<${maxs[lv]}; _${lv}++)
        (>= _${lv} ${mins[lv]}) (< _${lv} ${maxs[lv]})
          % endif
        % endif
      % endfor
      )
      ${check_output(output)}
      true)

    % elif len(set(loopvar_nesting[output_nesting[output]]).intersection(set(loopvar_nesting[thisloopvar]))) > 0:
    <% common_ancestors = set(loopvar_nesting[output_nesting[output]]).intersection(set(loopvar_nesting[thisloopvar])) %>
    (ite (and
    ;;; output ${output}'s loop shares a common ancestor with this loop and that is ${common_ancestors}
      % for lv in [output_nesting[output]] + loopvar_nesting[output_nesting[output]]:
        % if lv in common_ancestors and lv in dependent_loopvars[output]:
        ;;; loop over ${lv} from ${mins[lv]} to ${lv}
        ;for (int _${lv}=${mins[lv]}; _${lv}<${lv}; _${lv}++)
        (>= _${lv} ${mins[lv]}) (< _${lv} ${lv})
        % elif lv in common_ancestors and lv not in dependent_loopvars[output]:
        ;;; loop over ${lv} from ${lv} to ${lv}
        ;for (int _${lv}=${lv}; _${lv}==${lv}; _${lv}++)
        (= _${lv} ${lv})
        % else:
        ;;; loop over ${lv} from ${mins[lv]} to ${maxs[lv]}
        ;for (int _${lv}=${mins[lv]}; _${lv}<${maxs[lv]}; _${lv}++)
        (>= _${lv} ${mins[lv]}) (< _${lv} ${maxs[lv]})
        % endif
      % endfor
      )
      ${check_output(output)}
      true)
    % endif

  % endfor

)))


(define-fun ${name}__2 (${all_params + ' '.join(["(_%s Int)" % x for x in loopvar])}) Bool
  ;short-circuit if we're out of valid loop range
  (ite (or
    % for x in range(len(loopvar)):
      % if loopvar[x] == thisloopvar:
      (> ${loopvar[x]}  ${maxs[loopvar[x]]})
      % else:
      (>= ${loopvar[x]} ${maxs[loopvar[x]]})
      % endif
    % endfor
     ) 
     true


  % for output in outarray:

    % if thisloopvar == output_nesting[output]:
    ;output ${output} is inside this loop
    (ite (and
    % for lv in [output_nesting[output]] + loopvar_nesting[output_nesting[output]]:
      % if lv == thisloopvar and loopvar_nesting[output_nesting[output]]:
      ;;; loop over ${lv} from ${mins[lv]} to ${maxs[lv]}
      ;for (int _${lv}=${mins[lv]}; _${lv} < ${maxs[lv]}; _${lv}++)
      (>= _${lv} ${mins[lv]}) (< _${lv} ${maxs[lv]})
      % elif lv not in dependent_loopvars[output]:
      ;;; break out of loop
      ;for (int _${lv}=0; false; )
      false
      % else:
      ;;; loop over ${lv} from ${mins[lv]} to ${lv}
      ;for (int _${lv}=${mins[lv]}; _${lv} < ${lv}; _${lv}++)
      (>= _${lv} ${mins[lv]}) (< _${lv} ${lv})
      % endif
    % endfor
      )
      ${check_output(output)}

    ;;; now deal with remaining iters
    (ite (and
    % for lv in [output_nesting[output]] + loopvar_nesting[output_nesting[output]]:
      % if lv == thisloopvar:
      ;;; loop over ${lv} from ${mins[lv]} to ${lv}
      ;for (int _${lv}=${mins[lv]}; _${lv}<${lv}; _${lv}++)
      (>= _${lv} ${mins[lv]}) (< _${lv} ${lv})
      % else:
      ;;; loop over ${lv} from ${lv} to ${lv}
      ;for (int _${lv}=${lv}; _${lv}==${lv}; _${lv}++)
      (= _${lv} ${lv})
      % endif
    % endfor
      )
      ${check_output(output)}
      true))

    % elif thisloopvar in loopvar_nesting[output_nesting[output]]:
    (ite (and
    ;;; output ${output} is in a loop that is fully contained in this loop
      % for lv in [output_nesting[output]] + loopvar_nesting[output_nesting[output]]:
        % if lv == thisloopvar:
          % if lv not in dependent_loopvars[output]:
        ;;; loop over max(${mins[lv]}, ${lv}-1) to ${lv}
        ;for (int _${lv}=max(${mins[lv]}, ${lv}-1); _${lv}<${lv}; _${lv}++)
        (>= _${lv} (max ${mins[lv]} (- ${lv} 1))) (< _${lv} ${lv})
          % else:
        ;;; loop over ${lv} from ${mins[lv]} to ${lv}
        ;for (int _${lv}=${mins[lv]}; _${lv}<${lv}; _${lv}++)
        (>= _${lv} ${mins[lv]}) (< _${lv} ${lv})
          % endif
        % else:
          % if lv not in dependent_loopvars[output]:
        ;;; loop over max(${mins[lv]}, ${lv}-1) to ${lv}
        ;for (int _${lv}=max(${mins[lv]}, ${lv}-1); _${lv}<${lv}; _${lv}++)
        (>= _${lv} (max ${mins[lv]} (- ${lv} 1))) (< _${lv} ${lv})
          % elif lv in loopvar_nesting[thisloopvar]:
        ;;; loop over ${lv} from ${mins[lv]} to ${lv}
        ;for (int _${lv}=${mins[lv]}; _${lv}<${lv}; _${lv}++)
        (>= _${lv} ${mins[lv]}) (< _${lv} ${lv})
          % else:
        ;;; loop over ${lv} from ${mins[lv]} to ${maxs[lv]}
        ;for (int _${lv}=${mins[lv]}; _${lv}<${maxs[lv]}; _${lv}++)
        (>= _${lv} ${mins[lv]}) (< _${lv} ${maxs[lv]})
          % endif
        % endif
      % endfor
      )
      ${check_output(output)}
      true)

    % elif len(set(loopvar_nesting[output_nesting[output]]).intersection(set(loopvar_nesting[thisloopvar]))) > 0:
    <% common_ancestors = set(loopvar_nesting[output_nesting[output]]).intersection(set(loopvar_nesting[thisloopvar])) %>
    (ite (and
    ;;; output ${output}'s loop shares a common ancestor with this loop and that is ${common_ancestors}
      % for lv in [output_nesting[output]] + loopvar_nesting[output_nesting[output]]:
        % if lv in common_ancestors and lv in dependent_loopvars[output]:
        ;;; loop over ${lv} from ${mins[lv]} to ${lv}
        ;for (int _${lv}=${mins[lv]}; _${lv}<${lv}; _${lv}++)
        (>= _${lv} ${mins[lv]}) (< _${lv} ${lv})
        % elif lv in common_ancestors and lv not in dependent_loopvars[output]:
        ;;; loop over ${lv} from ${lv} to ${lv}
        ;for (int _${lv}=${lv}; _${lv}==${lv}; _${lv}++)
        (= _${lv} ${lv})
        % else:
        ;;; loop over ${lv} from ${mins[lv]} to ${maxs[lv]}
        ;for (int _${lv}=${mins[lv]}; _${lv}<${maxs[lv]}; _${lv}++)
        (>= _${lv} ${mins[lv]}) (< _${lv} ${maxs[lv]})
        % endif
      % endfor
      )
      ${check_output(output)}
      true)
    % endif

  % endfor

))
