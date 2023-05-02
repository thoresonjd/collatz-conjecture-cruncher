/**
 * @file main.cpp - Runs the Collatz Conjecture on an input number
 * @author Justin Thoreson
 * @version 1.0
 * @see https://en.wikipedia.org/wiki/Collatz_conjecture
 */

#include <iostream>
#include <fstream>

const std::string FILENAME = "output";

/**
 * Executes the Collatz Conjecture repeatedly until convergence to 1
 * @param number Reference to the number to execute the Collatz Conjecture on
 * @param out Reference to the desired output stream for logging results
 */
void collatzConjecture(unsigned long long&, std::ostream&);

/**
 * Executes the Collatz Conjecture operation on a number
 * @param number Reference to the number to execute the Collatz Conjecture on
 * @param out Reference to the desired output stream for logging results
 */
void collatz(unsigned long long&, std::ostream&);

int main(void) {
    unsigned long long number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::ofstream file(FILENAME);
    collatzConjecture(number, file);
    return 0;
}

void collatzConjecture(unsigned long long& number, std::ostream& out) {
    while (number != 1)
        collatz(number, out);
}

void collatz(unsigned long long& number, std::ostream& out) {
    out << "Number is: " << number;
    if (number % 2 == 0) {
        out << " - even - dividing by two...\n";
        number /= 2;
    }
    else {
        out << " - odd - multiplying by three, adding one...\n";
        number = 3 * number + 1;
    }
}