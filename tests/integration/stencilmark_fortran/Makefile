# akcheung: type 'make stencil' to use stng to generate halide code
# the outputs are stored in the 'stencil' directory

FC=gfortran
CC=gcc
#FFLAGS=-Ofast
FFLAGS=-O3 -ffast-math
CFLAGS=-O3

all: heat divergence gradient

heat: main-heat.f90 heat.f90
	$(FC) $(FFLAGS) main-heat.f90 heat.f90 -o heat

divergence: main-divergence.f90 divergence.f90
	$(FC) $(FFLAGS) main-divergence.f90 divergence.f90 -o divergence

gradient: main-gradient.f90 gradient.f90
	$(FC) $(FFLAGS) main-gradient.f90 gradient.f90 -o gradient

clean:
	rm -f heat gradient divergence


# Use this if you built STNG from the repo
STENCIL_COMPILER=../../../frontend/bin/translator
# Or use this if you use the docker image
STENCIL_COMPILER=docker run --rm -v `pwd`:`pwd` -w `pwd` -t stng_frontend translator

STENCIL_DIR=stencil
STENCIL_LIB_DIR=$(HOME)/stencil/lib
STENCIL_FLAGS=-out $(STENCIL_DIR)

TIMER_SRC = timerDefs.c
TIMER_OBJ = `echo $(patsubst %.c, ./%.o, $(TIMER_SRC))` $(STENCIL_LIB_DIR)/record.o

stencil_time: STENCIL_FLAGS += -i


stencil: heat_stencil divergence_stencil gradient_stencil

stencil_time: stencil


HALIDE_OBJ = $(shell find . -name '*_halide.o')
HALIDE_GLUE_SRC = $(shell find . -name '*_halideglue.cpp')
HALIDE_FLAGS = `echo $(patsubst ./%.o, -D use_%glue, $(HALIDE_OBJ))`
HALIDE_GLUE_OBJ = `echo $(patsubst ./%.o, %glue.o, $(HALIDE_OBJ))`

heat_stencil: main-heat.f90 heat.f90
	$(STENCIL_COMPILER) $(STENCIL_FLAGS) $?
	$(MAKE) -C $(STENCIL_DIR) -f ../Makefile heat_stencil_exe

# -lpthread required by halide
heat_stencil_exe:
	$(CC) $(CFLAGS) -c $(HALIDE_GLUE_SRC)

ifeq (,$(wildcard $(TIMER_SRC)))
	echo "building without instrumentation"
	$(FC) $(FFLAGS) $(HALIDE_FLAGS) -cpp -ffree-line-length-none \
  *_loop*[0-9].f90 main-heat.f90 heat.f90 $(HALIDE_OBJ) $(HALIDE_GLUE_OBJ) -lpthread -o heat

else
	echo "building with instrumentation"
	$(CC) $(CFLAGS) -c $(TIMER_SRC)
	$(FC) $(FFLAGS) $(HALIDE_FLAGS) -cpp -ffree-line-length-none \
  *_loop*[0-9].f90 main-heat.f90 heat.f90 $(TIMER_OBJ) $(HALIDE_OBJ) $(HALIDE_GLUE_OBJ) -lpthread -o heat

endif


divergence_stencil: main-divergence.f90 divergence.f90
	$(STENCIL_COMPILER) $(STENCIL_FLAGS) $?
	$(MAKE) -C $(STENCIL_DIR) -f ../Makefile divergence_stencil_exe

divergence_stencil_exe:
	$(CC) $(CFLAGS) -c $(HALIDE_GLUE_SRC)

ifeq (,$(wildcard $(TIMER_SRC)))
	echo "building without instrumentation"
	$(FC) $(FFLAGS) $(HALIDE_FLAGS) -cpp -ffree-line-length-none \
  *_loop*[0-9].f90 main-divergence.f90 divergence.f90 $(HALIDE_OBJ) $(HALIDE_GLUE_OBJ) -lpthread -o divergence

else
	echo "building with instrumentation"
	$(CC) $(CFLAGS) -c $(TIMER_SRC)
	$(FC) $(FFLAGS) $(HALIDE_FLAGS) -cpp -ffree-line-length-none \
  *_loop*[0-9].f90 main-divergence.f90 divergence.f90 $(TIMER_OBJ) $(HALIDE_OBJ) $(HALIDE_GLUE_OBJ) -o divergence

endif


gradient_stencil: main-gradient.f90 gradient.f90
	$(STENCIL_COMPILER) $(STENCIL_FLAGS) $?
	$(MAKE) -C $(STENCIL_DIR) -f ../Makefile gradient_stencil_exe

gradient_stencil_exe:
	$(CC) $(CFLAGS) -c $(HALIDE_GLUE_SRC)

ifeq (,$(wildcard $(TIMER_SRC)))
	echo "building without instrumentation"
	$(FC) $(FFLAGS) $(HALIDE_FLAGS) -cpp -ffree-line-length-none \
  *_loop*[0-9].f90 main-gradient.f90 gradient.f90 $(HALIDE_OBJ) $(HALIDE_GLUE_OBJ) -lpthread -o gradient

else
	echo "building with instrumentation"
	$(CC) $(CFLAGS) -c $(TIMER_SRC)
	$(FC) $(FFLAGS) $(HALIDE_FLAGS) -cpp -ffree-line-length-none \
  *_loop*[0-9].f90 main-gradient.f90 gradient.f90 $(TIMER_OBJ) $(HALIDE_OBJ) $(HALIDE_GLUE_OBJ) -lpthread -o gradient

endif



