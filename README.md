# STNG
compiler for fortran stencils using verified lifting

This repo contains the frontend and backend of the STNG compiler, along with test cases.

Notes for the frontend:
- The `include` and `lib` directories should contain all the header and library files from boost version 1.40 and 
rose (downloaded back in 2014 with 3 patches) that are needed 
to compile the frontend. The libraries were compiled on a 32-bit machine running Ubuntu 10.04.
- If you want to compile the source, you need to install Java. In particular change the `Makefile` to point to the correct directory containing `libjvm.so`
- The rose library is stored as compressed form on github (due to its 100MB limit). The Makefile will 
decompress it to `lib/rose/lib/librose.so.0.0.0` on first execution.
- For trying out the tool, use the included `Dockerfile`. Building the docker file will create an image of 32-bit ubuntu 14.04, download the stng source code, build it, and put the compiled frontend executable `translator` in `/bin`. Invoke it with `<input fortran source code> -out <output directory for the Halide translated source>`.
