/**
 * @file main.cpp - Runs the Collatz Conjecture on an input number
 * @author Justin Thoreson
 * @version 1.0
 * @see https://en.wikipedia.org/wiki/Collatz_conjecture
 */

#include <iostream>

/**
 * Executes the Collatz Conjecture repeatedly until convergence to 1
 * @param number Reference to the number to execute the Collatz Conjecture on
 */
void collatzConjecture(unsigned long long&);

/**
 * Executes the Collatz Conjecture operation on a number
 * @param number Reference to the number to execute the Collatz Conjecture on
 */
void collatz(unsigned long long&);

int main(void) {
    unsigned long long number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    collatzConjecture(number);
    return 0;
}

void collatzConjecture(unsigned long long& number) {
    while (number != 1) {
        collatz(number);
        std::cout << number << std::endl;
    }
}

void collatz(unsigned long long& number) {
    if (number % 2 == 0)
        number /= 2;
    else
        number = 3 * number + 1;
}