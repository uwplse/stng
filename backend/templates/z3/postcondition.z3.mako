<%
  all_params = ' '.join(["(%s %s)" % (x[0], x[1]) for x in parameters]) + " "
  all_params += ' '.join(["(%s Int)" % x for x in loopvar]) + " "
  all_params += ' '.join(["(%s_to_check Int)" % x for x in loopvar])


  var = loopvar[0]
  lhs_p = loopvar[0] + "_to_check"
  for pp in loopvar[1:]:
    lhs_p = "(+ " + lhs_p + " (* N %s_to_check" % pp
  for pp in loopvar[0:]:
    lhs_p += ")"

  def construct_select(terms):
      if len(terms) == 2:
          return "(select %s %s)" % (terms[0], terms[1])
      else:
          return "(select %s %s)" % (construct_select(terms[:-1]), terms[-1])

%>

; postcondition
(define-fun postcondition (${all_params}) Bool
    (ite (and
            % for var in loopvar:
            (< ${var}_to_check ${loopvar_maxs[var]}) (> ${var}_to_check ${loopvar_mins[var]})
            % endfor
         )
         (let (
          % for var in loopvar:
            (${var} ${var}_to_check)
          % endfor 
              )
          % for oarr in outarray:
          <% 
            lv = "postcondition"
            key = "gen_%s_%s" % (oarr, lv)
            lhskey = "lhs_idx_%s" % (oarr,)
            lhs_sel = construct_select([oarr]+loopvar[::-1])
          %>
         ;(= (select ${oarr} ${synthesized_invariant[lhskey]}) ${synthesized_invariant[key]})
         (= ${lhs_sel} ${synthesized_invariant[key]})
          % endfor
         )
         true))

