from pyparsing import *
from stencil_ir import *
import sys

sys.setrecursionlimit(10000)

ParserElement.enablePackrat()

comment=('#'+restOfLine).suppress()
LBRACK,RBRACK,EQ,LCURL,RCURL,COMMA,LPAR,RPAR = map(Suppress, "[]={},()")
exp = Forward()
arrexp = Forward()
binexp = Forward()
numnode = Word(nums+".")
numnode.setParseAction(lambda x: NumNode(val=float(x[0])) if "." in x[0] else NumNode(val=int(x[0])))
varnode = Word(alphas+"_",alphanums+"_")
varnode.setParseAction(lambda x: VarNode(x[0]))

lit = (numnode | varnode)

arrexp << (varnode + LBRACK + exp + RBRACK)
arrexp.setParseAction(lambda x: ArrExp(x[0], x[1]))

arithop1 = oneOf('* /')
arithop2 = oneOf('+ -')
#arithop = '+'
boolop = oneOf('< > <= >= ==')
#binexp = (arrexp | lit) + (arithop|boolop) + exp
binexp_atoms = (arrexp | lit | LPAR + binexp + RPAR | binexp )
binexp_atoms = (arrexp | lit | LPAR + binexp + RPAR )
#@traceParseAction
#def myactionOLD(x):
  #if len(x[0]) > 3:
    #ret = BinExp(x[0][0], x[0][1], x[0][2])
    ##del x[0][0::2]
    #x[0] = [ret] + x[0][3:]
    #return myaction(x)
  #else:
    #ret = BinExp(x[0][0], x[0][1], x[0][2])
  #return ret

#@traceParseAction
def myaction(x):
  #print "HI ", x
  while len(x[0]) > 3:
#    print "IN WHILE"
    ret = BinExp(x[0][0], x[0][1], x[0][2])
    #del x[0][0::2]
    x[0] = [ret] + x[0][3:]
    #return myaction(x)
  #else:
  ret = BinExp(x[0][0], x[0][1], x[0][2])
  return ret


binexp << infixNotation(binexp_atoms, [(arithop1, 2, opAssoc.LEFT, myaction),
                                       (arithop2, 2, opAssoc.LEFT, myaction),
                                       (boolop, 2, opAssoc.LEFT, myaction)])
#binexp.setName("binexp").setDebug()

#binexp.setParseAction(lambda x: BinExp(x[0], x[1], x[2]))

assignexp = (arrexp | varnode) + EQ + exp
assignexp.setParseAction(lambda x: AssignExp(x[0], x[1]))

exp << (binexp | arrexp | lit)

whileexp = Forward()
statement = (assignexp | whileexp)
block = OneOrMore(statement)
block.setParseAction(lambda x: Block(x))
block.ignore(comment)
#block.setName("block").setDebug()

whileexp << (Literal("while") + LCURL + varnode + COMMA + exp + RCURL + LCURL + block + RCURL)
whileexp.setParseAction(lambda x: WhileLoop(x[1], x[2], x[3]))

def parse(s):
    """
    Top-level parsing.
    """
    return block.parseString(s)[0]

def parse_expression(s):
    """
    Parse a single expression.
    """
    return exp.parseString(s)[0]

def parse_metadata(s):
    """
    Find a line starting with "#INFO" and parse out the inputs and loop
    variables.
    """
    import json
    for line in s.split('\n'):
        if line.startswith("#INFO:"):
            json_str = line[6:]
            obj = json.loads(json_str)
    if not obj:
        raise Exception("Unable to find metadata")
    # we need to normalize everything to use strings
    loopvars = map(str, obj["loopvars"])
    inputs = [(str(x[0]), str(x[1])) for x in obj["inputs"]]
    return (loopvars, inputs)
