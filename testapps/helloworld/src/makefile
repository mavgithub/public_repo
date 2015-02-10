#-------------------------------------------------------------------------------------------------------------------------------------------
#   Filename: makefile
#   Description: Makefile for building Hello World application.
#   
#	Change Log: 
#   2015_02_10_EST_1411: mav: File created.
#
#-------------------------------------------------------------------------------------------------------------------------------------------
# Directory Structure:                 
#---------------------                 
# [helloworld]                         
#    ├───[include]                     
#    ├      └───helloworld.h           
#    ├                                 
#    ├───[lib]                         
#    ├                                 
#    └───[src]                         
#    ├  ├───helloworld.c               
#    ├  ├───hellofunc.c                
#    ├  └───makefile                   
#    ├                                 
#    └───[obj]                         
#          ├───helloworld.o            
#          └───hellofunc.o             
#                                      
#-------------------------------------------------------------------------------------------------------------------------------------------
IDIR = ../include
LDIR = ../lib     # directory for including libraries.

ODIR = obj
# create the obj directory if it does not exist.
dummy_build_folder := $(shell mkdir -p $(ODIR))


LIBS =  -lm       # macro that defines the libraries to be included.

CC  = gcc         # c compiler.
CXX = g++         # c++ compiler.


CFLAGS   = -Wall -I$(IDIR)
CPPFLAGS = -Wall  # write pre-processor settings (-I, -D, etc) here.
CXXFLAGS = -Wall  # write compiler settings here.

LDFLAGS =         # write linker settings here.


#-------------------------------------------------------------------------------------------------------------------------------------------
# Create the macro DEPS, which is the set of .h files on which the .c files depend.
_DEPS = helloworld.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = helloworld.o hellofunc.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

#--------------------------------------------------------------------------------------------------------------------------------------------
# Define a rule that applies to all files ending in the .o suffix. 
# The rule says that the .o file depends upon the .c version of the file and the .h files included in the DEPS macro.
# The rule then says that to generate the .o file, make needs to compile the .c file using the compiler defined in the CC macro.
# The -c flag says to generate the object file. 
# The -o $@ says to put the output of the compilation in the file named on the left side of the :.
# The $< is the first item in the dependencies list.
# And, the CFLAGS macro is defined as above.
# 
# $@ represents left  side of :.
# $^ represents right side of :.
# $< represents items added into the dependencies list.
#--------------------------------------------------------------------------------------------------------------------------------------------
$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

helloworld: $(OBJ)
	gcc -o $@ $^ $(CFLAGS) $(LIBS)

#--------------------------------------------------------------------------------------------------------------------------------------------
# The .PHONY rule keeps make from doing something with a file named clean.
.PHONY: clean

clean:
	rm -f *.exe $(ODIR)/*.o *~ core $(INCDIR)/*~
	ls -la

#--------------------------------------------------------------------------------------------------------------------------------------------
