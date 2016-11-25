#define BENCHSIZE 8192

#include "Halide.h"
#include <vector>
#include <chrono>
#include <iostream>
#include <string>

<%
  inputs.sort()
  scalar_inputs.sort()
  outputs.sort()
  if should_reverse:
    loopvars.reverse()

  import re
  stencilnew = []
  for sten in stencil:
    stencilnew.append(re.sub("(\d+\.\d+)", "((float)\g<1>)", sten))
    print stencilnew
%>
using namespace Halide;

int main(int argc, char* argv[]) {
  % for x in inputs:
  ImageParam ${x[0]}(type_of<double>(),${len(x[1].split('_'))-1});
  % endfor

  % for x in scalar_inputs:
  Param<${x[1]}> ${x[0]}("${x[0]}");
  % endfor

  % for x in outputs:
  Expr ${x}_e;
  Func ${x};
  % endfor

  % for x in loopvars:
  Var ${x};
  % endfor

  % for sten in stencilnew:
  ${sten}
  % endfor

  % for x in outputs:
  ${x}_e = ${x}(${','.join(loopvars)});
  % endfor

  % if len(outputs) > 1:
    Tuple my_output(${','.join([z+"_e" for z in outputs])});
  % else:
    Expr my_output = ${outputs[0]}_e;
  % endif

  Func my_func;
  my_func(${','.join(loopvars)}) = my_output;

  std::vector<Argument> args;
  % for x in inputs:
  args.push_back(${x[0]});
  % endfor
  % for x in scalar_inputs:
  args.push_back(${x[0]});
  % endfor

#ifdef GPUBENCH

  bool without_copy = argc > 1 && !(std::string(argv[1]).compare(std::string("nocopy")));

  Target target = get_host_target();
  target.set_feature(Target::CUDA);

  my_func.gpu_tile(${','.join(loopvars)}, ${','.join(['16' for x in loopvars])});


  % for inp in inputs:
  Buffer ${inp[0]}_buf(Float(64), ${','.join(["BENCHSIZE+4" for x in loopvars])});
  ${inp[0]}.set(${inp[0]}_buf);
  ${inp[0]}_buf.set_min(${','.join(["-2" for x in loopvars])});
  % endfor

  auto _out = my_func.realize(${','.join(["BENCHSIZE" for x in loopvars])}, target);
  std::cout << "Starting timing..." << std::endl;
  auto start = std::chrono::high_resolution_clock::now();

  for (int i=0; i<30; i++) {
    my_func.realize(_out, target);
    if (!without_copy)
    for (auto buf: _out.as_vector())
      buf.copy_to_host();
  }
  if (without_copy)
  for (auto buf: _out.as_vector())
    buf.copy_to_host();

  auto end = std::chrono::high_resolution_clock::now();
  auto us = std::chrono::duration_cast<std::chrono::microseconds>(end-start);
  std::cout << "per execution: " << (us.count()/30.0) << std::endl;

#else
  Var tj, tk;
  my_func.parallel(${loopvars[-1]}).vectorize(${loopvars[0]}, 8);

  my_func.compile_to_file("${fname+"_halide"}", args);

#endif
}
