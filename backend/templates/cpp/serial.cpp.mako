#include <iostream>
#include <cstdlib>
#include <chrono>

void alloc_and_randomize(double** arr, int sz) {
    *arr = (double*) malloc(sizeof(double) * sz);
    for (int i=0; i<sz; i++)
        (*arr)[i] = rand()/RAND_MAX;
}


#define CLEAR_SIZE  (10000000)

double clearA[CLEAR_SIZE];
double clearB[CLEAR_SIZE];
void clear_cache_() {
  int i;
  std::cout << "Clearing cache\n";
  for (i=0; i<CLEAR_SIZE; i++)
    clearA[i] = rand() * clearB[i];
}


<%
  params = ', '.join(["double* %s" % x[0] for x in inputs])
  if len(inputs) > 0:
    params += ','
  params += ', '.join(["double* %s" % x for x in outputs])
  params += ', ' + ', '.join(["%s %s" % (x[1], x[0]) for x in scalar_inputs])
  params += ', ' + ', '.join(["int %s_start, int %s_end" % (x,x) for x in loopvars])


  call_params = ', '.join(["%s" % x[0] for x in inputs])
  if len(inputs) > 0:
    call_params += ','
  call_params += ', '.join(["%s" % x for x in outputs])
  call_params += ', ' + ', '.join(["%s" % (x[0]) for x in scalar_inputs])
  call_params += ', ' + ', '.join(["%s_start, %s_end" % (x,x) for x in loopvars])
%>
void stencil(${params}) {
  % for x in loopvars:
  #pragma loop count min(32)
  for (int ${x} = ${x}_start; ${x} < ${x}_end; ${x}++) {
  % endfor

  % for sten in stencil:
  ${sten}
  % endfor

  % for x in loopvars:
  }
  % endfor

}
int main(int argc, char* argv[]) {
<%
    int_inputs = [x[0] for x in scalar_inputs if "int" in x[1]]
    int_inputs += ["%s_start" % x for x in loopvars]
    int_inputs += ["%s_end" % x for x in loopvars]
    double_inputs = [x[0] for x in scalar_inputs if x[1]=="double"]
    array_inputs = [x[0] for x in inputs if "[" in x[1]] + outputs
    dims = len(loopvars)
    import re
%>
  if (argc < ${len(int_inputs)+1}) {
    std::cout << "Usage: " << argv[0] << " SIZE ${" ".join(int_inputs)}" << std::endl;
    exit(1);
  }
  int SIZE = atoi(argv[1]);

% for x in int_inputs:
  int ${x} = atoi(argv[${loop.index+2}]);
% endfor

% for x in array_inputs:
  double* ${x};
  alloc_and_randomize(&${x}, ${"*".join(["SIZE" for z in loopvars])});
% endfor

% for x in double_inputs:
% if "__float__" in x:
  double ${x} = ${re.sub("_", ".", re.sub("__float__", "", x))};
% else:
  double ${x} = rand()/(double)RAND_MAX;
% endif
% endfor



  for (int i=0; i<5; i++) {
    clear_cache_();
    auto start = std::chrono::high_resolution_clock::now();
    stencil(${call_params});
    auto chk = ${outputs[0]}[100];
    auto end = std::chrono::high_resolution_clock::now();
    auto us = std::chrono::duration_cast<std::chrono::microseconds>(end-start);
    std::cout << chk;
    std::cout << "Elapsed us: " << (us.count()) << std::endl;
  }



}
