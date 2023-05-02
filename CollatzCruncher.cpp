/**
 * @file CollatzCruncher.cpp - Class implementation for the Collatz Conjecture
 * @author Justin Thoreson
 * @version 1.0
 * @see https://en.wikipedia.org/wiki/Collatz_conjecture
 */

#include "CollatzCruncher.h"

CollatzCruncher::CollatzCruncher(Int number, std::ostream& out)
    : number(number), out(out)
{}

void CollatzCruncher::crunch() {
    while (number != 1)
        collatzConjecture();
}

void CollatzCruncher::collatzConjecture() {
    out << "Number is: " << number << std::endl;
    if (number % 2 == 0) {
        out << "Even, dividing by two...\n";
        number /= 2;
    }
    else {
        out << "Odd, multiplying by three, adding one...\n";
        number = 3 * number + 1;
    }
    out << "Result is " << number << std::endl << std::endl;
}