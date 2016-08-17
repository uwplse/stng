import sympy
import re

class IdxParser(object):
    """
    The IdxParser class takes in the generated text for an index function
    from sketch and then subsequently can be used to create an expression
    from a function call.
    """
    def __init__(self, func):
        self.setup_func(func)

    def setup_func(self, func):
        """
        Create a function that will turn a call of this index function into an
        inline-able expression.
        """
        mobj = re.match("void (\w+)\s*\((.*)\)", func)
        #print "function name: %s" %  mobj.group(1)

        params = mobj.group(2)

        # remove type names
        params = re.sub("int |ref ", "", params)

        # split params
        params = params.split(", ")


        print "params: %s" % params
        self.params = params
        self.fname = mobj.group(1)

        # split function into lines and take out unnecessary lines
        funclines = func.split('\n')[2:-1]
        funclines = [x.rstrip(";") for x in funclines]
        funclines = filter(lambda x: "return" not in x, funclines)
        print funclines
        self.func_body = funclines

    def interpret(self, call):
        def is_int(i):
            if i[0] == '-':
                return i[1:].isdigit()
            return i.isdigit()


        mobj = re.search("%s\s*\((.*)\)" % self.fname, call)
        concrete_params = mobj.group(1)

        # split params
        concrete_params = concrete_params.split(",")
        concrete_params = [x.lstrip() for x in concrete_params]
        print concrete_params
        print len(concrete_params)
        print len(self.params)

        # split each line at = and use symbolic replacement
        # to replace the params with concrete params in the RHS
        ret = ""
        for line in self.func_body:
            newline = line.split("=")
            newline_lhs = sympy.sympify(newline[0])
            newline_rhs = sympy.sympify(newline[1])
            for p in range(len(self.params)):
#                newline,x = re.subn(self.params[p], concrete_params[p], newline)
                replacement = re.sub(r'([a-zA-Z]\w*)', r'\1__', concrete_params[p])
                print "replacing rhs: ", newline_rhs, "with ", self.params[p], replacement
                #replacement = concrete_params[p] + ("" if is_int(concrete_params[p]) else "__")
                newline_rhs = newline_rhs.subs(self.params[p], replacement) #concrete_params[p])
                newline_lhs = newline_lhs.subs(self.params[p], replacement) #concrete_params[p])
            ret += str(newline_lhs) + " = " + str(newline_rhs) + "\n"
        ret = re.sub("__", "", ret)
        return ret


class SketchResultProcessor(object):
    """
    This class processes the successfully synthesized sketch into index expressions,
    invariants, and postconditions to be used in subsequent stages of the overall
    pipeline (Z3 script generation and backend code generation).
    """
    def __init__(self, sketch_result):
        self.sketch_result = sketch_result.split('\n')
        self.idx_funcs = {}
        self.generated_funcs = {}
        # offset will be subtracted from index expressions
        self.offset = 99

    def process_idx_func(self, name, start_lineno):
        end_lineno = start_lineno
        while "}" not in self.sketch_result[end_lineno]:
            end_lineno += 1
        self.idx_funcs[name] = IdxParser("\n".join(self.sketch_result[start_lineno:end_lineno]))

    def process_generated_func(self, name, start_lineno):
        end_lineno = start_lineno
        while "}" not in self.sketch_result[end_lineno]:
            end_lineno += 1
        self.generated_funcs[name.strip()] = self.interpret_generated_func(self.sketch_result[start_lineno:end_lineno])

    def interpret_generated_func(self, func):
        # normalize by removing a bunch of unnecessary things
        import copy
        func_copy = copy.deepcopy(func)
        print "BEFORE CLEANUP", '\n'.join(func_copy)
        for lineno in range(len(func_copy)):
            # remove all "foo = 0"
            func_copy[lineno] = re.sub("[\w\s_]* = 0;.*", "\n", func_copy[lineno])

            # deal with "double a" crap
            func_copy[lineno] = re.sub("\(a\)", "(aa)", func_copy[lineno])
            func_copy[lineno] = re.sub("double a ", "double aa ", func_copy[lineno])
            func_copy[lineno] = re.sub("a \+", "aa +", func_copy[lineno])
            func_copy[lineno] = re.sub("\+ a([;\s\)])", "+ aa\g<1>", func_copy[lineno])
            func_copy[lineno] = re.sub("a -", "aa -", func_copy[lineno])
            func_copy[lineno] = re.sub("- a([;\s\)])", "- aa\g<1>", func_copy[lineno])
            func_copy[lineno] = re.sub("a \*", "aa *", func_copy[lineno])
            func_copy[lineno] = re.sub("\* a([;\s\)])", "* aa\g<1>", func_copy[lineno])


            # inline index expressions
            match = re.search("(idx_[^\(]+)\(", func_copy[lineno])
            if match:
                print "index expr match: ", func_copy[lineno]
                func_copy[lineno] = self.idx_funcs[match.group(1)].interpret(func_copy[lineno])
                print "after interpret: ", func_copy[lineno]


            # remove all assertions
            if re.search("assert\s*\(", func_copy[lineno]):
                func_copy[lineno] = "\n"

            # remove all _limit expressions
            if re.search("_limit", func_copy[lineno]):
                func_copy[lineno] = "\n"

            # remove all types and semicolons and return
            func_copy[lineno] = re.sub(";", "", func_copy[lineno])
            func_copy[lineno] = re.sub('int|double', "", func_copy[lineno])
            func_copy[lineno] = re.sub("\s*return.*", "", func_copy[lineno])

            # strip space
            func_copy[lineno] = func_copy[lineno].strip()

            #if re.search("0;", func_copy[lineno]):
            #    print "found ", func_copy[lineno]
            #    func_copy[lineno] = ""

            # convert __float__<val> to floating point value
            match = re.search("__float__([\d_]+)", func_copy[lineno])
            if match:
                num = re.sub("_", ".", match.group(1))
                print "inserting ", num
                func_copy[lineno] = re.sub("__float__([\d_])+", num, func_copy[lineno])



            # find _out
            match = re.match("_out = (.*)", func_copy[lineno])
            if match:
                expr = match.group(1)
                # convert it from matrix notation to function notation
                expr = re.sub("\]", ")", expr)
                expr = re.sub("\[", "(", expr)
                out = sympy.sympify(expr)
                func_copy[lineno] = ""

        print "AFTER CLEANUP1", '\n'.join(func_copy)
        # eliminate extra = 0 stuff added in interpreting the index exprs
        for lineno in range(len(func_copy)):
            func_copy[lineno] = re.sub("(.*) = 0[^\.]", "", func_copy[lineno])

        print "AFTER CLEANUP2", '\n'.join(func_copy)
        # iterate from bottom up
        for lineno in reversed(range(len(func_copy))):
            match = re.match("(.*) = (.*)", func_copy[lineno])
            if match:
                expr_rhs = match.group(2)
                expr_rhs = re.sub("\]", "-%s)" % self.offset, expr_rhs)
                expr_rhs = re.sub("\[", "(", expr_rhs)
                print match.group(1), "should be replaced with", expr_rhs
                print "types: ", type(match.group(1)), type(out), type(expr_rhs)
#                out = out.subs(match.group(1), expr_rhs)
                out = re.sub(match.group(1), expr_rhs, str(out))
                # stupid thing can't handle 'var' as an array name or variable
                if "var(" in out:
                    out = re.sub("var\(", "v___ar(", out)
                print "replaced version: ", out
                out = sympy.sympify(out)
                print "new output is ", out

        print '\n'.join(func_copy)
        # now we want to convert the arrays back from functions
        outstr = str(out)
        for arr in out.atoms(sympy.Function):
            arrstr = re.sub("([\w_]+)\(", "\g<1>[", str(arr))
            arrstr = arrstr[:-1] + "]"
            outstr = re.sub(re.escape(str(arr)), arrstr, outstr)
            print "outstr after sub", outstr
        print "output is ", outstr
        # we can't handle -foo, so here's a HACK HACK FIXME
        outstr = re.sub("\(-", "(0 - ", outstr)
        outstr = re.sub("v___ar", "var", outstr) ###
        return outstr

    def process_pcon_lhs(self, start_lineno):
        end_lineno = start_lineno
        #while "}" not in self.sketch_result[end_lineno]:
        while "return;" not in self.sketch_result[end_lineno]:
            end_lineno += 1
        # find index expressions
        for lineno in range(start_lineno,end_lineno):
            match = re.search("(idx_[^\(]+)\(", self.sketch_result[lineno])
            print "looking for match in pcon lhs: ", self.sketch_result[lineno]
            if match:
                print "match found for pcon lhs: ", self.sketch_result[lineno]
                key = "lhs_" + match.group(1)
                idx_expr = self.idx_funcs[match.group(1)].interpret(self.sketch_result[lineno]).split('\n')[-2]
                idx_expr = idx_expr.split("= ")[-1]
                idx_expr = re.sub("_p", "", idx_expr)
                idx_expr = str(sympy.sympify(idx_expr + "-99"))
                # we can't handle -foo so here's a HACK HACK FIXME
                idx_expr = re.sub("\(-", "(0 - ", idx_expr)
                print "adding to generated funcs: ", key, idx_expr
                self.generated_funcs[key] = idx_expr



    def interpret(self):
        # first, find all idx_* functions and process them
        for lineno in range(len(self.sketch_result)):
            match = re.search("void (idx_[^\(]+)\(", self.sketch_result[lineno])
            if match:
                print "MATCH ON ", match
                self.process_idx_func(match.group(1).strip(), lineno)
        print "IDX FUNCS", self.idx_funcs

        # find lhs equations for postcondition
        # FIXME: is this always same for invariants?
        for lineno in range(len(self.sketch_result)):
            match = re.search("void postcondition.*", self.sketch_result[lineno])
            if match:
                print "found postcondition, and calling process_pcon_lhs", match.group(0)
                self.process_pcon_lhs(lineno)

        # now find invariants/postcon
        for lineno in range(len(self.sketch_result)):
            match = re.search("void (gen_[^\(]+)\(", self.sketch_result[lineno])
            if match:
                self.process_generated_func(match.group(1), lineno)

        print "BEFORE NORMALIZE OF idx_*", self.generated_funcs
        # normalize ones that start with -
        for x in self.generated_funcs.keys():
            if self.generated_funcs[x][0] == "-":
                self.generated_funcs[x] = "0.0 " + self.generated_funcs[x]

        # normalize idx_* functions and include in generated funcs
        for idx_func in self.idx_funcs.keys():
            print self.idx_funcs[idx_func].func_body[1]
            idx_expr = self.idx_funcs[idx_func].func_body[1].split("= ")[-1]
            idx_expr = str(sympy.sympify(idx_expr + "-99"))
            self.generated_funcs[idx_func] = idx_expr
        return self.generated_funcs
