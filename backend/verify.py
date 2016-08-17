from stencil_ir import *

class WeakestPrecondition(object):
    counter = 0
    def __init__(self, ast, q, conds, invariant_call=None):
        self.ast = ast
        self.q = q
        self.additional_conditions = conds
        if invariant_call:
            self.invariant_call = invariant_call
        else:
            WeakestPrecondition.counter += 1
            self.invariant_call = [CallExp(VarNode("I"+str(WeakestPrecondition.counter)), map(lambda x: VarNode(x), self.get_all_vars_in_block(self.ast)))]


    def get_with_additional_conditions(self):
        without_conds = self.get()
        if self.additional_conditions:
            aconds = reduce(lambda x,y: BinExp(x, '&&', y), self.additional_conditions)
            return BinExp(aconds, '&&', without_conds)
        else:
            return without_conds

    def get(self):
#        if self.additional_conditions:
#            print "Additional: " + '&'.join([tree_to_str(x) for x in self.additional_conditions])
        if type(self.ast) == NumNode:
            return self.q
        if type(self.ast) == VarNode:
            return self.q
        if type(self.ast) == ArrExp:
            return self.q
        if type(self.ast) == AssignExp:
            return self.processAssignExp()
        if type(self.ast) == Block:
            return self.processBlock()
        if type(self.ast) == WhileLoop:
            return self.processWhileLoop()
        if type(self.ast) == IfExp:
            return self.processIfExp()

    def processAssignExp(self):
        """
        Called when replacing lhs of an AssignExp with its lhs.

        Implements the Hoare Logic rule: wp(x:=e, Q) = Q[e/x]

        Special case for array expressions on the LHS:
        wp(x[i]:=e, Q) = Q[x'/x] where x' = x[i->e]

        """
        import asp.codegen.ast_tools
        import copy
        class CustomReplacer(asp.codegen.ast_tools.ASTNodeReplacer):
            def visit(self, node):
                if isinstance(node, AugArrayVarNode):
                    return self.visit_AugArrayVarNode(node)
                return super(CustomReplacer, self).visit(node)
            def visit_AugArrayVarNode(self, node):
                #print "in augarrayvar!", tree_to_str(node)
                newnode = super(CustomReplacer, self).visit(node)
                aug = {}
                for x in newnode.augmentation.keys():
                    aug[x] = self.visit(newnode.augmentation[x])
                newnode.augmentation = aug
                return newnode

        if type(self.ast.lval) == VarNode:
            old = copy_tree(self.ast.lval)
            replacement = copy_tree(self.ast.rval)
        elif type(self.ast.lval) == ArrExp:
            #print "in replacer...\n"
            old = copy_tree(self.ast.lval.name)
            replacement = AugArrayVarNode(copy_tree(self.ast.lval.name), {})
            replacement.augmentation[copy_tree(self.ast.lval.loc)] = copy_tree(self.ast.rval)
            #print "Going to replace ", tree_to_str(self.ast), " with " + tree_to_str(replacement) + "\n"
        #replaced =  asp.codegen.ast_tools.ASTNodeReplacer(old, replacement).visit(copy.deepcopy(self.q))
        replaced =  CustomReplacer(old, replacement).visit(copy.deepcopy(self.q))
        #print "Replaced tree: " + tree_to_str(replaced) + "\n"
        return replaced
    def processBlock(self):
        """
        Called when finding the weakest precondition of a block of statements.

        Implements the rule: wp(c1;c2, Q) = wp(c1, wp(c2, Q))
        """
        wp_last = WeakestPrecondition(self.ast.body[-1], self.q, self.additional_conditions, self.invariant_call).get()
        if len(self.ast.body) == 1:
            return wp_last
        else:
            return WeakestPrecondition(Block(self.ast.body[0:-1]), wp_last, self.additional_conditions, self.invariant_call).get()

    def processWhileLoop(self):
        """
        Weakest precondition of a while loop.

        Implements the rule wp(while b do c, Q) = P
                                               && P -> I
                                               && (I && b) -> wp(c, I)
                                               && (I && !b) -> Q
        """
        import copy, hashlib
        key = hashlib.sha224(tree_to_str(self.ast)).hexdigest()[0:10]
        print "INVARIANT CALL: ", self.invariant_call
        print "KEY:", key
        invariant = copy.deepcopy(self.invariant_call[key])
        #pcon_invariant = self.invariant_for_pcon(invariant, copy_tree(self.ast.iter_var))
        #test_pcon = self.test_for_pcon(copy_tree(self.ast.test), copy_tree(self.ast.iter_var))
        pcon_invariant = copy.deepcopy(invariant)
        test_pcon = NotExp(copy_tree(self.ast.test))
        if len(self.invariant_call) > 1:
            invariant_to_pass = self.invariant_call #[1:]
        else:
            invariant_to_pass = None

        self.additional_conditions.append(ImplicationExp(BinExp(pcon_invariant,
                                                                 '&&', test_pcon),
                                                                 self.q))

        self.additional_conditions.append(ImplicationExp(BinExp(invariant,
                                                                 '&&', copy_tree(self.ast.test)),
                                                       WeakestPrecondition(self.ast.body,
                                                           #ImplicationExp(copy_tree(self.ast.test), copy.deepcopy(invariant)), self.additional_conditions, None).get()))
                                                           copy.deepcopy(invariant), self.additional_conditions, invariant_to_pass).get()))


        # FIXME: does entire thing need to be passed?
        return ImplicationExp(VarNode("true"), invariant)

    def processIfExp(self):
        """
        Weakest precondition for a conditional expression.

        Implements the rule wp(if E then A else B, Q) = E -> wp(A, Q) &&
                                                        !E -> wp(B, Q)
        """
        # this is wrong/deprecated code.
        raise
        import copy
        if len(self.invariant_call) > 1:
            invariant_to_pass = self.invariant_call[1:]
        else:
            invariant_to_pass = None

        # self.additional_conditions.append(ImplicationExp(NotExp(copy_tree(self.ast.cond)),
        #                          WeakestPrecondition(self.ast.elsebranch, self.q,
        #                              self.additional_conditions, invariant_to_pass).get()))

        return BinExp(ImplicationExp(copy_tree(self.ast.cond),
                                 WeakestPrecondition(self.ast.thenbranch, self.q,
                                     self.additional_conditions, invariant_to_pass).get()),
                         '&&',
                         ImplicationExp(NotExp(copy_tree(self.ast.cond)),
                                  WeakestPrecondition(self.ast.elsebranch, self.q,
                                      self.additional_conditions, invariant_to_pass).get()))


    def invariant_for_pcon(self, invariant, loopvar):
        """
        Change the call to invariant to use a new set of variables.
        """
        import asp.codegen.ast_tools
        import copy
        new = VarNode(loopvar.name + "_p")
        return asp.codegen.ast_tools.ASTNodeReplacer(loopvar, new).visit(copy.deepcopy(invariant))

    def test_for_pcon(self, test, loopvar):
        """
        Change the loop test to use a new set of variables & negate it.
        """
        import asp.codegen.ast_tools
        import copy
        new = VarNode(loopvar.name + "_p")
        return NotExp(asp.codegen.ast_tools.ASTNodeReplacer(loopvar, new).visit(test))

    def get_all_vars_in_block(self, block):
        """
        Finds all vars in a block, for use to pass to loop invariants.
        """
        import asp.codegen.ast_tools
        class VarFinder(asp.codegen.ast_tools.NodeVisitor):
            def __init__(self):
                super(VarFinder, self).__init__()
                self.varnodes = []
            def visit_VarNode(self, node):
                if node.name not in self.varnodes:
                    self.varnodes += [node.name]

        finder = VarFinder()
        finder.visit(block)
        return finder.varnodes
