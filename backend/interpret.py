from stencil_ir import *
import asp.codegen.ast_tools as ast_tools
import sympy
import random
import re

ARRAYSIZE = 10000
AOFFSET = 99

def is_int(x):
  try:
    a = int(x)
    return True
  except Exception:
    return False

class Interpreter(ast_tools.NodeVisitor):
  """
  A concrete interpreter over the IR that uses symbolic values for array entries.
  """
  def __init__(self, inputs, outputs):
    self.result = None
    self.inputs = inputs
    self.outputs = outputs
    self.state = {}
    self.initialize_state()

  def initialize_state(self):
    """
    Initializes accessible variables/arrays.
    """
    for x in self.inputs:
      if "[" in x[1]:
        # it is an array
        self.state[x[0]] = [sympy.sympify(x[0]+"_"+str(i)) for i in range(ARRAYSIZE)]
      else:
        # it's a scalar
        if x[1] == 'int':
          self.state[x[0]] = sympy.sympify(random.randint(1,9))
   #    elif x[1] == 'float' or x[1] == 'double':
   #          # these come in the form __float__<num>
   #          import re
   #
   #          self.state[x[0]] = float(re.sub("_", ".", x[0][9:]))



    for x in self.outputs:
      if "[" in x[1]:
        # it is an array
        self.state[x[0]] = [sympy.sympify(x[0]+"_"+str(i)) for i in range(ARRAYSIZE)]

  def outputs_changed(self):
    """
    Check to see if any outputs are changed.
    """
    outputs_changed = False
    for output in self.outputs:
        i = 0
        while (i < ARRAYSIZE) and (self.state[output[0]][i] == sympy.sympify(output[0]+"_"+str(i))):
            i += 1
        if i<ARRAYSIZE:
            outputs_changed = True
            print "Outputs have changed."
            break
    return outputs_changed

  def interpret(self, tree):
    """
    Top-level function for interpretation.
    """
    tries_left = 10
    while tries_left > 0:
        self.visit(tree)
        if self.outputs_changed():
            break
        tries_left -= 1
        self.initialize_state()

    if tries_left == 0:
        print "WARNING: May have exhausted all tries."

    return self.state

  def visit_NumNode(self, node):
    return node.val

  def visit_VarNode(self, node):
    if node.name in self.state:
      return self.state[node.name]
    else:
      return node.name

  def visit_ArrExp(self, node):
    print "In ArrExp: ", tree_to_str(node)
    loc = self.visit(node.loc)
    print "--->", loc
    return self.state[node.name.name][loc+AOFFSET]

  def visit_BinExp(self, node):
    # if it's a conditional, we don't want to sympify, but rather to interpret it directly
    if node.op in ['<', '>', '==', '!=', '<=', '>=']:
        if node.op != '<':
            raise
        else:
            left = self.visit(node.left)
            right = self.visit(node.right)
            ret = left < right
            print "binop conditional: ", tree_to_str(node), " aka ", left, "<", right, " evaluates to ", ret
            return ret
    ret = sympy.sympify("(("+str(self.visit(node.left))+")" + node.op +"("+str(self.visit(node.right))+"))")
    print "binop:", ret
    return ret

  def visit_Block(self, node):
    map(self.visit, node.body)

  def visit_WhileLoop(self, node):
    # we evaluate condition before entry
    while self.visit(node.test):
        self.visit(node.body)

  def visit_AssignExp(self, node):
    if type(node.lval) == VarNode:
      self.state[node.lval.name] = self.visit(node.rval)
    else:
      # it is an array
      self.state[node.lval.name.name][self.visit(node.lval.loc)+AOFFSET] = self.visit(node.rval)

class Guesser(object):
  def __init__(self, inputs, outputs):
    self.postcondition = None
    self.inputs = inputs
    self.outputs = outputs

  def guess_postcondition(self, results):
    # do the simplest thing.  for each output, find the first changed value and convert it to
    # a function of indices
    guess = {}
    for output in self.outputs:
      print "Finding first changed value for output ", output[0]
      if "[" in output[1]:
        # find changed value
        i = 0
        while results[output[0]][i] == sympy.sympify(output[0]+"_"+str(i)):
          i += 1
        print "first changed value in ", output[0], i, results[output[0]][i]
        template = str(results[output[0]][i])
        # replace _XX with an idx generator
        #template = re.sub(r'(.*?)_\d+', r'\1(ptgen_\1())', template)
        #template = re.sub(r'(.*?)_\d+', lambda x: "%s(ptgen_%s())" % (x.group(1), re.sub(r'\W', '', x.group(1))), template)
        for inp in self.inputs:
            template = re.sub(inp[0]+'_\d+', "%s[ptgen_%s()]" % (inp[0], inp[0]), template)

        print "replaced with: ", template
        guess[output[0]] = template
    return guess
