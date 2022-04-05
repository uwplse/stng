ROOT=$(PWD)

CC=gcc
CXX=g++

FC=gfortran

SRC=$(ROOT)/src
LIB_SRC=$(ROOT)/lib

# rose header files directly refer to rose.h rather than rose/rose.h
ROSE_INCLUDE=$(ROOT)/include/rose

# this awkward setup is due to rose insisting that the libraries 
# be located under a directory called 'lib' (sage_support.cpp:562)
ROSE_LIB=$(ROOT)/lib/rose/lib

# boost header files refer to boost/xxx.h
BOOST_INCLUDE=$(ROOT)/include
BOOST_LIB=$(ROOT)/lib/boost

INCLUDES=-I$(BOOST_INCLUDE) -I$(ROSE_INCLUDE)

JVM_LIB=/usr/lib/jvm/java-6-openjdk-i386/jre/lib/i386/server/

LIBS=-L$(BOOST_LIB) -L$(ROSE_LIB) -L$(JVM_LIB) \
     -lboost_system -lboost_filesystem -lboost_regex -lboost_thread -lboost_wave \
     -ljvm \
     -lrose 

# pass to the linker paths to search for runtime libraries 
# (same as setting LD_LIBRARY_PATH)
CXXFLAGS=-std=c++0x -g -Wno-deprecated \
-Wl,-rpath=$(BOOST_LIB) \
-Wl,-rpath=$(JVM_LIB) \
-Wl,-rpath=$(ROSE_LIB)


OBJS=$(patsubst %.cpp, %.o, $(wildcard $(SRC)/*.cpp))


all: $(OBJS) $(SRC)/*.h lib $(ROSE_LIB)/librose.so.0.0.0
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(OBJS) -o bin/translator $(LIBS)

# only matches if librose.so.0.0.0.lzma is found
$(ROSE_LIB)/librose.so.0.0.0: $(wildcard $(ROSE_LIB)/librose.so.0.0.0.lzma)
	if [ ! -e $(ROSE_LIB)/librose.so.0.0.0 ]; then \
	xz --decompress $(ROSE_LIB)/librose.so.0.0.0.lzma; \
	fi

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $@ -c $<

clean:
	rm -f $(SRC)/*.o translate *.log
	rm -f $(LIB_SRC)/*.o


LIB_OBJS=$(patsubst %.c, %.o, $(wildcard $(LIB_SRC)/*.c))

lib: $(LIB_OBJS#	$(CC) -O3 -c $(wildcard $(LIB_SRC)/*.c) 
