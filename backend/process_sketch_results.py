import logging
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

        params = mobj.group(2)

        # remove type names
        params = re.sub("int |ref ", "", params)

        # split params
        params = params.split(", ")

        self.params = params
        self.fname = mobj.group(1)

        # split function into lines and take out unnecessary lines
        funclines = func.split('\n')[2:-1]
        funclines = [x.rstrip(";") for x in funclines]
        funclines = filter(lambda x: "return" not in x, funclines)
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

        # split each line at = and use symbolic replacement
        # to replace the params with concrete params in the RHS
        ret = ""
        for line in self.func_body:
            newline = line.split("=")
            newline_lhs = sympy.sympify(newline[0])
            newline_rhs = sympy.sympify(newline[1])
            for p in range(len(self.params)):
                replacement = re.sub(r'([a-zA-Z]\w*)', r'\1__', concrete_params[p])
                logging.debug("replacing rhs: %s with %s %s", newline_rhs, self.params[p], replacement)
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
        logging.debug("Before cleanup: %s ", '\n'.join(func_copy))
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
                logging.debug("index expr match: %s", func_copy[lineno])
                func_copy[lineno] = self.idx_funcs[match.group(1)].interpret(func_copy[lineno])
                logging.debug("after interpret: %s", func_copy[lineno])


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

            # convert __float__<val> to floating point value
            match = re.search("__float__([\d_]+)", func_copy[lineno])
            if match:
                num = re.sub("_", ".", match.group(1))
                logging.debug("inserting %s", num)
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

        logging.debug("After cleanup phase 1: %s", '\n'.join(func_copy))
        # eliminate extra = 0 stuff added in interpreting the index exprs
        for lineno in range(len(func_copy)):
            func_copy[lineno] = re.sub("(.*) = 0[^\.]", "", func_copy[lineno])

        logging.debug("After cleanup phase 2: %s", '\n'.join(func_copy))
        # iterate from bottom up
        for lineno in reversed(range(len(func_copy))):
            match = re.match("(.*) = (.*)", func_copy[lineno])
            if match:
                expr_rhs = match.group(2)
                expr_rhs = re.sub("\]", "-%s)" % self.offset, expr_rhs)
                expr_rhs = re.sub("\[", "(", expr_rhs)
                logging.debug("%s should be replaced with %s", match.group(1), expr_rhs)
                logging.debug("types: %s %s %s", type(match.group(1)), type(out), type(expr_rhs))
                out = re.sub(match.group(1), expr_rhs, str(out))
                # stupid thing can't handle 'var' as an array name or variable
                if "var(" in out:
                    out = re.sub("var\(", "v___ar(", out)
                if "in(" in out:
                    out = re.sub("in\(", "i___n(", out)
                logging.debug("replaced version: %s", out)
                out = sympy.sympify(out)
                logging.debug("new output is %s", out)

        # now we want to convert the arrays back from functions
        outstr = str(out)
        for arr in out.atoms(sympy.Function):
            arrstr = re.sub("([\w_]+)\(", "\g<1>[", str(arr))
            arrstr = arrstr[:-1] + "]"
            outstr = re.sub(re.escape(str(arr)), arrstr, outstr)
            logging.debug("outstr after sub: %s", outstr)
        logging.debug("output is %s", outstr)
        # we can't handle -foo, so here's a HACK HACK FIXME
        outstr = re.sub("\(-", "(0 - ", outstr)
        outstr = re.sub("v___ar", "var", outstr) ### undo replacement
        outstr = re.sub("i___n", "in", outstr) ###
        return outstr

    def process_pcon_lhs(self, start_lineno):
        end_lineno = start_lineno
        while "return;" not in self.sketch_result[end_lineno]:
            end_lineno += 1
        # find index expressions
        for lineno in range(start_lineno,end_lineno):
            match = re.search("(idx_[^\(]+)\(", self.sketch_result[lineno])
            logging.debug("looking for match in pcon lhs: %s", self.sketch_result[lineno])
            if match:
                logging.debug("match found for pcon lhs: %s", self.sketch_result[lineno])
                key = "lhs_" + match.group(1)
                idx_expr = self.idx_funcs[match.group(1)].interpret(self.sketch_result[lineno]).split('\n')[-2]
                idx_expr = idx_expr.split("= ")[-1]
                idx_expr = re.sub("_p", "", idx_expr)
                idx_expr = str(sympy.sympify(idx_expr + "-99"))
                # we can't handle -foo so here's a HACK HACK FIXME
                idx_expr = re.sub("\(-", "(0 - ", idx_expr)
                logging.debug("adding to generated funcs: %s %s", key, idx_expr)
                self.generated_funcs[key] = idx_expr



    def interpret(self):
        # first, find all idx_* functions and process them
        for lineno in range(len(self.sketch_result)):
            match = re.search("void (idx_[^\(]+)\(", self.sketch_result[lineno])
            if match:
                logging.debug("Match on: %s", match)
                self.process_idx_func(match.group(1).strip(), lineno)
        logging.debug("Idx funcs: %s", self.idx_funcs)

        # find lhs equations for postcondition
        for lineno in range(len(self.sketch_result)):
            match = re.search("void postcondition.*", self.sketch_result[lineno])
            if match:
                logging.debug("found postcondition, and calling process_pcon_lhs %s", match.group(0))
                self.process_pcon_lhs(lineno)

        # now find invariants/postcon
        for lineno in range(len(self.sketch_result)):
            match = re.search("void (gen_[^\(]+)\(", self.sketch_result[lineno])
            if match:
                self.process_generated_func(match.group(1), lineno)

        # normalize ones that start with -
        for x in self.generated_funcs.keys():
            if self.generated_funcs[x][0] == "-":
                self.generated_funcs[x] = "0.0 " + self.generated_funcs[x]

        # normalize idx_* functions and include in generated funcs
        for idx_func in self.idx_funcs.keys():
            logging.debug("%s", self.idx_funcs[idx_func].func_body[1])
            idx_expr = self.idx_funcs[idx_func].func_body[1].split("= ")[-1]
            idx_expr = str(sympy.sympify(idx_expr + "-99"))
            self.generated_funcs[idx_func] = idx_expr
        return self.generated_funcs
