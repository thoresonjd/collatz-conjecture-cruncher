# Justin Thoreson, Makefile

CPPFLAGS = -std=c++20 -Wall -Werror -pedantic -ggdb
PROGRAM = collatz

$(PROGRAM) : $(PROGRAM).o CollatzCruncher.o
	g++ $(CPPFLAGS) $^ -o $@

$(PROGRAM).o : $(PROGRAM).cpp CollatzCruncher.h
	g++ $(CPPFLAGS) $< -c -o $@

CollatzCruncher.o : CollatzCruncher.cpp CollatzCruncher.h
	g++ $(CPPFLAGS) $< -c -o $@

run : $(PROGRAM)
	./$<

clean :
	rm -f $(PROGRAM) *.o output