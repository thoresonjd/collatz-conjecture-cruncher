# Justin Thoreson, Makefile

CPPFLAGS = -std=c++20 -Wall -Werror -pedantic -ggdb
PROGRAM = collatz

$(PROGRAM) : main.cpp
	g++ $(CPPFLAGS) $< -o $@

run : $(PROGRAM)
	./$<

clean :
	rm -f $(PROGRAM) output