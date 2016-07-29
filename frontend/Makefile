CC=gcc
CXX=g++
CXXFLAGS=-std=c++0x -g -Wno-deprecated
FC=gfortran

SRC=./src
LIB_SRC=./lib

ROSE_ROOT=$(HOME)/roseBuild

BOOST_INSTALL=$(HOME)/boostBuild

INCLUDES=-I$(BOOST_INSTALL)/include -I$(ROSE_ROOT)/include/rose 
JVMLIBS=-L/usr/lib/jvm/java-8-openjdk-amd64/jre/lib/amd64/server -ljvm

#LIBS=-L$(ROSE_ROOT)/lib -L$(BOOST_INSTALL)/lib \

LIBS=-L./lib \
     -lrose -lboost_system -lboost_filesystem -lboost_regex #$(JVMLIBS)

OBJS=$(patsubst %.cpp, %.o, $(wildcard $(SRC)/*.cpp))


all: $(OBJS) $(SRC)/*.h lib
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(OBJS) -o translator $(LIBS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $@ -c $<

clean:
	rm -f $(SRC)/*.o translate *.log
	rm -f $(LIB_SRC)/*.o


LIB_OBJS=$(patsubst %.c, %.o, $(wildcard $(LIB_SRC)/*.c))

lib: $(LIB_OBJS)
#	$(CC) -O3 -c $(wildcard $(LIB_SRC)/*.c) 
