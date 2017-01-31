from stencil_ir import *
import asp.codegen.ast_tools as ast_tools
import sympy
import random
import re
import logging

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

    for x in self.outputs:
      if "[" in x[1]:
        # it is an array
        self.state[x[0]] = [sympy.sympify(x[0]+"_"+str(i)) for i in range(ARRAYSIZE)]

    logging.debug("Finished initializing interpreter state.")

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
            logging.debug("Outputs have changed.")
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
        logging.info("WARNING: Interpreter may have exhausted all tries.")

    return self.state

  def visit_NumNode(self, node):
    return node.val

  def visit_VarNode(self, node):
    if node.name in self.state:
      return self.state[node.name]
    else:
      return node.name

  def visit_ArrExp(self, node):
    loc = self.visit(node.loc)
    logging.debug("Array access to loc %s", loc+AOFFSET)
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
            #print "binop conditional: ", tree_to_str(node), " aka ", left, "<", right, " evaluates to ", ret
            return ret
    ret = sympy.sympify("(("+str(self.visit(node.left))+")" + node.op +"("+str(self.visit(node.right))+"))")
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
      logging.debug("Finding first changed value for output %s", output[0])
      if "[" in output[1]:
        # find changed value
        i = 0
        while results[output[0]][i] == sympy.sympify(output[0]+"_"+str(i)):
          i += 1
        logging.debug("first changed value in %s is at %s and is %s", output[0], i, results[output[0]][i])
        template = str(results[output[0]][i])
        # replace _XX with an idx generator
        for inp in self.inputs:
            template = re.sub(inp[0]+'_\d+', "%s[ptgen_%s()]" % (inp[0], inp[0]), template)

        logging.debug("replaced with: %s", template)
        guess[output[0]] = template
    return guess
