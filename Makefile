#-----------------------------------------------------------------------------
# Name: Sidharth Naik ID: 1647945 Class: 12B/M Date: January 29,2018
# Description: Compiles the cfiles File Name: Makefile
# -----------------------------------------------------------------------------

FLAGS = -std=c99 -Wall
SOURCES = FileReverse.c
OBJECTS = FileReverse.o
EXEBIN = FileReverse
SUBMIT = submit cmps012b-pt.w19 lab3

all: $(EXEBIN)

$(EXEBIN) : $(OBJECTS)
	gcc -o $(EXEBIN) $(OBJECTS)

$(OBJECTS) : $(SOURCES)
	gcc -c $(FLAGS) $(SOURCES)

clean :
	rm -f $(EXEBIN) $(OBJECTS)

submit :
	submit  cmps012b-pt.w19 lab3 FileReverse.c README Makefile

check :
	ls  /afs/cats.ucsc.edu/class/cmps012b-pt.w19/lab3/sidnaik
