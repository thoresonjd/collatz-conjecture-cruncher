/**
 * @file collatz.cpp - Executes the Collatz Conjecture on a number and outputs the path
 * @author Justin Thoreson
 * @version 1.0
 * @see https://en.wikipedia.org/wiki/Collatz_conjecture
 */

#include <iostream>
#include <fstream>
#include "CollatzCruncher.h"

const std::string FILENAME = "output";

int main(void) {
    unsigned long long int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::ofstream file(FILENAME);
    CollatzCruncher(number, file).crunch();
    return 0;
}