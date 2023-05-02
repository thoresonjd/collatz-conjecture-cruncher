/**
 * @file CollatzCruncher.h - Class declaration for the Collatz Conjecture
 * @author Justin Thoreson
 * @version 1.0
 * @see https://en.wikipedia.org/wiki/Collatz_conjecture
 */

#pragma once
#include <ostream>

/**
 * @class Crunches the numbers for the Collatz Conjecture
 */
class CollatzCruncher {
private:
    using Int = unsigned long long int;
    Int number;
    std::ostream& out;

    /**
     * Executes the Collatz Conjecture operation on a number
     */
    void collatzConjecture();

public:
    /**
     * Initializes a Collatz Cruncher object
     * @param number Reference to the number to execute the Collatz Conjecture on
     * @param out Reference to the desired output stream for logging results
     */
    CollatzCruncher(Int, std::ostream&);

    /**
     * Executes the Collatz Conjecture repeatedly until convergence to 1
     */
    void crunch();
};