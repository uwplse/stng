#!/usr/bin/env python

import argparse
import os

def output(stuff, outfile):
    if os.path.isfile(args.outfile):
        print "Not writing out ", args.outfile, " because it already exists."
        exit(1)
    if (outfile == '-'):
        print(stuff)
    else:
        with open(args.outfile, 'w') as outfile:
            outfile.write(stuff)


def gen_sketch(args):
    import generate_sketch as gs
    import parse_ir
    import stencil_ir
    print "Generating sketch level", args.sketch_level, "from IR file: ", args.infile,
    print "to output file: ", args.outfile
    with open(args.infile, "r") as infile:
        instr = infile.read()
        program = parse_ir.parse(instr)
        loopvars, inputs = parse_ir.parse_metadata(instr)
        print "Program: ", stencil_ir.tree_to_str(program)
        print "Loop variables: ", loopvars
        print "Inputs: ", inputs
    whichGenerator = gs.SketchGeneratorLevels[str(args.sketch_level)]
    sketch = whichGenerator(program, inputs, loopvars).generate()
    print "Generation done. Writing output to ", args.outfile
    output(sketch, args.outfile)
    print "Done."

def gen_z3(args):
    import generate_z3 as gz3
    import generate_sketch as gs
    import parse_ir
    import process_sketch_results as pp
    print "Generating Z3 from IR file: ", args.infile,
    print "and sketch output file: ", args.sketch_output_src,
    print "to output file: ", args.outfile
    # read in the sketch
    with open(args.infile, "r") as infile:
        instr = infile.read()
        program = parse_ir.parse(instr)
        loopvars, inputs = parse_ir.parse_metadata(instr)
        print "Program: ", program
        print "Loop variables: ", loopvars
        print "Inputs: ", inputs
    # get the invariant
    with open(args.sketch_output_src, "r") as skresult:
#        postcondition = pp.PostconditionParser(skresult.read(), loopvars, inputs).get_postcondition()
        postcondition = pp.SketchResultProcessor(skresult.read()).interpret()
        print "postcondition from SketchResultProcessor: ", postcondition
    # generate Z3
    z3str = gz3.Z3Generator(program, inputs, loopvars, postcondition).generate()
    print "Generation done. Writing output to ", args.outfile
    output(z3str, args.outfile)
    print "Done."

def gen_backend_code(args):
    import generate_sketch as gs
    import parse_ir
    #import parse_postcondition as pp
    import process_sketch_results as pp
    print "Generating backend output file from IR file: ", args.infile,
    print "and sketch output file: ", args.sketch_output_src,
    print "to output file: ", args.outfile
    # read in the sketch
    with open(args.infile, "r") as infile:
        instr = infile.read()
        program = parse_ir.parse(instr)
        loopvars, inputs = parse_ir.parse_metadata(instr)
        print "Program: ", program
        print "Loop variables: ", loopvars
        print "Inputs: ", inputs
    # get the invariant
    with open(args.sketch_output_src, "r") as skresult:
        #postcondition = pp.PostconditionParser(skresult.read()).get_postcondition()
        postcondition = pp.SketchResultProcessor(skresult.read()).interpret()
    # generate backend code
    if args.backend_cpp:
        import backend_cpp as backend
        import os.path
        fname = os.path.splitext(os.path.basename(args.infile))[0]
        backendstr = backend.CppBackend(program, postcondition, inputs, loopvars, fname).generate()
    if args.backend_halide:
        import backend_halide as backend
        import os.path
        fname = os.path.splitext(os.path.basename(args.infile))[0]
        backendstr = backend.HalideBackend(program, postcondition, inputs, loopvars, fname).generate()

    print "Generation done. Writing output to ", args.outfile
    output(backendstr, args.outfile)
    print "Done."



parser = argparse.ArgumentParser()

parser.add_argument("infile", help="Input stencil IR file.")
parser.add_argument("outfile", help="Output file (use \"-\" for output to stdout).")

parser.add_argument("--sketch-output-src", help="Sketch output file to parse for generating Z3 or backend code.")
cmd = parser.add_mutually_exclusive_group(required=True)
cmd.add_argument("--generate-sketch", action="store_true",
        help="Generate sketch from an IR file produced by the translator.")
cmd.add_argument("--generate-z3", action="store_true",
        help="Generate Z3 file from sketch output. Requires --sketch-output-src to be specified.")
cmd.add_argument("--generate-backend-code", action="store_true",
        help="Generate backend code from sketch output. Requires --sketch-output-src to be specified.")

sketch_opts = parser.add_argument_group("Sketch Generation Options")
sketch_opts.add_argument("--sketch-level", type=int, default=1,
        help="Change how complex the generated sketch is (level 1 is simplest).")

backend_opts = parser.add_argument_group("Backend Options")
backend_opts.add_argument("--backend-cpp", action="store_true",
        help="Use C++ backend (serial code).")
backend_opts.add_argument("--backend-halide", action="store_true",
        help="Use Halide backend.")

args = parser.parse_args()

if (args.generate_z3 or args.generate_backend_code) and not args.sketch_output_src:
    print "ERROR: --sketch-output-src must be specified"
    parser.print_help()

if args.generate_sketch:
    gen_sketch(args)
    exit(0)

if args.generate_z3:
    gen_z3(args)
    exit(0)

if args.generate_backend_code:
    gen_backend_code(args)
    exit(0)
