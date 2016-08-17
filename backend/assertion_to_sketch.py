from stencil_ir import *
import asp.codegen.ast_tools as ast_tools
import os, binascii

class ToSketch(ast_tools.NodeVisitor):
    class ImplicationSimplifier(ast_tools.NodeTransformer):
        def visit_ImplicationExp(self, node):
            """
            This implements two transformations.

            Anything that looks like
            x -> (y -> z) turns into (x && y) -> z

            Anything that looks like
            x -> ((a -> b) && (c -> d)) turns into
            (x && a) -> b  && (x && c) -> d
            """
            import copy
            if isinstance(node.then, ImplicationExp):
                return ImplicationExp(BinExp(node.ifx, '&&', self.visit(node.then.ifx)), self.visit(node.then.then))
            if isinstance(node.then, BinExp) and node.then.op == '&&' and isinstance(node.then.left, ImplicationExp) and isinstance(node.then.right, ImplicationExp):
                return BinExp(ImplicationExp(BinExp(node.ifx, '&&', self.visit(node.then.left.ifx)), self.visit(node.then.left.then)),
                              '&&',
                              ImplicationExp(BinExp(copy.deepcopy(node.ifx), '&&', self.visit(node.then.right.ifx)), self.visit(node.then.right.then)))
            return node

    decls = []
    def __init__(self, tree, additional_conds=[]):
        self.tree = ToSketch.ImplicationSimplifier().visit(tree)
        print "AFTER ImplicationSimplification: ", tree_to_str(self.tree)
        # maps augmented arrays to names.
        # key is string representation of node
        self.aug_map = {}
        self.additional_conds = map(ToSketch.ImplicationSimplifier().visit, additional_conds)
        self.decls = []

    def to_str(self):
        ToSketch.decls = []
        processed = self.visit(self.tree)
        additional_conditions = '\n'.join(map(self.visit, self.additional_conds))
        decls = self.get_decls() + '\n'
        return decls + additional_conditions + processed

    def add_decl(self, node):
#        print "adding decls"
        key = tree_to_str(node)
        newname = self.aug_map[key]
        ToSketch.decls.append("double[_array_sz] %s = %s;" % (newname, self.visit(node.name)))
#        ToSketch.decls.append("if (true) {\n")
        ToSketch.decls += ["%s[99+%s] = %s;" % (newname, self.visit(x), self.visit(node.augmentation[x])) for x in node.augmentation.keys()]
#        ToSketch.decls.append("\n}")

    def get_decls(self):
        return '\n'.join(ToSketch.decls)

    def visit_NumNode(self, node):
        return str(node.val)

    def visit_VarNode(self, node):
        return node.name

    def visit_NotExp(self, node):
        return "(!(%s))" % self.visit(node.ex)

    def visit_BinExp(self, node):
        # by this time, any binary expressions that remain & both have implications should
        # just be turned into a sequence
        if isinstance(node.left, ImplicationExp) and isinstance(node.right, ImplicationExp) and node.op == '&&':
            return "%s\n%s" % (self.visit(node.left), self.visit(node.right))
        return "(%s %s %s)" % (self.visit(node.left), node.op, self.visit(node.right))

    def visit_ArrExp(self, node):
        return "%s[99+%s]" % (self.visit(node.name), self.visit(node.loc))

    def visit_AssignExp(self, node):
        return "%s = %s;" % (self.visit(node.lval), self.visit(node.rval))

    def visit_CallExp(self, node):
        params = ','.join([self.visit(x) for x in node.params])
        return "%s(%s)" % (self.visit(node.fname), params)

    def visit_ImplicationExp(self, node):
        # should the 'then' node actually be a block?
        # FIXME: need better logic here
        import re
        then = self.visit(node.then)
        if not re.match("assert.*", then):
            then = "assert(%s);" % then
        if self.visit(node.ifx) == "true":
            return then
        return "if (%s) { %s }\n" % (self.visit(node.ifx), then)

    def visit_AugArrayVarNode(self, node):
        key = tree_to_str(node)
        if (key not in self.aug_map):
            self.aug_map[key] = "arr_"+binascii.b2a_hex(os.urandom(8))
            self.add_decl(node)
        return self.aug_map[key]
