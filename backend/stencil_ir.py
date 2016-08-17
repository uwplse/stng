import asp.tree_grammar
import ast
import types

asp.tree_grammar.parse('''
Exp = VarNode
    | NumNode
    | BinExp
    | CallExp
    | ImplicationExp
    | NotExp
    | ArrExp
    | AugArrayVarNode

VarNode(name = types.StringType)

AugArrayVarNode(name = VarNode, augmentation=types.DictType)

NumNode(val = types.IntType | types.FloatType)

ArrExp(name=(VarNode|AugArrayVarNode), loc=Exp)

BinExp(left = Exp, op = types.StringType, right = Exp)

AssignExp(lval = (VarNode | ArrExp), rval = Exp)

CallExp(fname = VarNode, params=Exp*)

NotExp(ex=Exp)

Block(body)

WhileLoop(iter_var=VarNode, test=Exp, body=Block)

ImplicationExp(ifx = Exp, then = Exp)

''', globals())


def tree_to_str(tree):
    if type(tree) == VarNode:
        return tree.name
    if type(tree) == NumNode:
        return str(tree.val)
    if type(tree) == AugArrayVarNode:
        if len(tree.augmentation) == 0:
            return "%s" % (tree_to_str(tree.name))
        else:
            aug_str = ','.join(["%s:=%s" % (tree_to_str(x), tree_to_str(tree.augmentation[x])) for x in tree.augmentation])
            return "%s{%s}" % (tree_to_str(tree.name), aug_str)
    if type(tree) == ArrExp:
        return "%s[%s]" % (tree_to_str(tree.name), tree_to_str(tree.loc))
    if type(tree) == BinExp:
        return "(%s %s %s)" % (tree_to_str(tree.left), str(tree.op), tree_to_str(tree.right))
    if type(tree) == AssignExp:
        return "%s = %s" % (tree_to_str(tree.lval), tree_to_str(tree.rval))
    if type(tree) == CallExp:
        return "%s(%s)" % (tree_to_str(tree.fname), ','.join([tree_to_str(x) for x in tree.params]))
    if type(tree) == ImplicationExp:
        return "(%s) -> (%s)" % (tree_to_str(tree.ifx), tree_to_str(tree.then))
    if type(tree) == NotExp:
        return "!(%s)" % (tree_to_str(tree.ex),)
    if type(tree) == Block:
        return '\n'.join([tree_to_str(x) for x in tree.body])
    if type(tree) == WhileLoop:
        return "while (%s) do {%s}" % (tree_to_str(tree.test), tree_to_str(tree.body))
    else:
        return type(tree)

def copy_tree(tree):
    from copy import deepcopy
    return copy.deepcopy(tree)

# deprecated
def to_ag_tree(tree):
    raise
# deprecated
def to_g_tree(tree):
    raise
