# STNG
compiler for fortran stencils using verified lifting

This repo contains the frontend and backend of the STNG compiler, along with test cases.

Notes for the frontend:
- The `include` and `lib` directories should contain all the header and library files from boost version 1.50 and 
rose (downloaded on July 28, 2016, hash `dc87e9a0cd4747b9dff366aabc0ea16fcf160821` with 3 patches) that are needed 
to compile the frontend. The libraries were compiled on a 64-bit machine running Ubuntu 16.04. 
- You need to install Java. In particular change the `Makefile` to point to the correct directory containing `libjvm.so`
- The rose library is stored as compressed form on github (due to its 100MB limit). The Makefile will 
decompress it to `lib/rose/lib/librose.so.0.0.0` on first execution.
