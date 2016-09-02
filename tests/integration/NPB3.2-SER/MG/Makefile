SHELL=/bin/sh
BENCHMARK=mg
BENCHMARKU=MG

STNG_HOME=

include $(STNG_HOME)/tests/integration/NPB3.2-SER/config/make.def

OBJS = mg.o ${COMMON}/print_results.o  \
       ${COMMON}/${RAND}.o ${COMMON}/timers.o ${COMMON}/wtime.o

#include ../sys/make.common
include $(STNG_HOME)/tests/integration/NPB3.2-SER/sys/make.common

${PROGRAM}: config ${OBJS}
	${FLINK} ${FLINKFLAGS} -o ${PROGRAM} ${OBJS} ${F_LIB}

mg.o:		mg.f90 globals.h npbparams.h
	${FCOMPILE} mg.f90


TRANSLATOR = $(STNG_HOME)/frontend/bin/translator
STENCIL_DIR = stencil

HALIDE_OBJ = $(shell find . -name '*_halide.o')
HALIDE_GLUE_SRC = $(shell find . -name '*_halideglue.cpp')
HALIDE_FLAGS = `echo $(patsubst ./%.o, -D use_%glue, $(HALIDE_OBJ))`
HALIDE_GLUE_OBJ = `echo $(patsubst ./%.o, %glue.o, $(HALIDE_OBJ))`


MG_stencil: mg.f90 globals.h npbparams.h
	$(TRANSLATOR) -out $(STENCIL_DIR) mg.f90 
	cp globals.h npbparams.h $(STENCIL_DIR)
	$(MAKE) -C $(STENCIL_DIR) -f ../Makefile MG_stencil_exe


MG_stencil_exe: COMMON = $(STNG_HOME)/tests/integration/NPB3.2-SER/common

MG_stencil_exe:
	$(CC) $(CFLAGS) -c $(HALIDE_GLUE_SRC)
	echo $(COMMON)
ifeq (,$(wildcard $(TIMER_SRC)))
	echo "building without instrumentation"
	$(FCOMPILE) $(HALIDE_FLAGS) -cpp -ffree-line-length-none *_loop*[0-9].f90 mg.f90 
	${FLINK} ${FLINKFLAGS} -cpp -ffree-line-length-none ${OBJS} *_loop*[0-9].f90 \
           $(HALIDE_OBJ) $(HALIDE_GLUE_OBJ) -lpthread -o ../${PROGRAM}

else
	echo "building with instrumentation"
	$(CC) $(CFLAGS) -c $(TIMER_SRC)
	$(FCOMPILE) $(HALIDE_FLAGS) -cpp -ffree-line-length-none *_loop*[0-9].f90 mg.f90 
	${FLINK} ${FLINKFLAGS} -cpp -ffree-line-length-none ${OBJS} *_loop*[0-9].f90 \
           $(TIMER_OBJ) $(HALIDE_OBJ) $(HALIDE_GLUE_OBJ) -lpthread -o ../${PROGRAM}

endif

clean:
	- rm -f *.o *~ 
	- rm -f npbparams.h core



