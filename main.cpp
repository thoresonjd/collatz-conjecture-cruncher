/**
 * @file main.cpp - Executes the Collatz Conjecture on a number and outputs the path
 * @author Justin Thoreson
 * @version 1.0
 * @see https://en.wikipedia.org/wiki/Collatz_conjecture
 */

#include <iostream>
#include <fstream>

const std::string FILENAME = "output";

class CollatzCruncher {
private:
    unsigned long long number;
    std::ostream& out;

    /**
     * Executes the Collatz Conjecture operation on a number
     */
    void collatzConjecture() {
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

public:
    /**
     * Initializes a Collatz Cruncher object
     * @param number Reference to the number to execute the Collatz Conjecture on
     * @param out Reference to the desired output stream for logging results
     */
    CollatzCruncher(unsigned long long number, std::ostream& out)
        : number(number), out(out)
    {}

    /**
     * Executes the Collatz Conjecture repeatedly until convergence to 1
     */
    void crunch() {
        while (number != 1)
            collatzConjecture();
    }
};

int main(void) {
    unsigned long long number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::ofstream file(FILENAME);
    CollatzCruncher(number, file).crunch();
    return 0;
}