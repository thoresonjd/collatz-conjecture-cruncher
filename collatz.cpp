/**
 * @file collatz.cpp - Executes the Collatz Conjecture on a number and outputs the path
 * @author Justin Thoreson
 * @version 1.0
 * @see https://en.wikipedia.org/wiki/Collatz_conjecture
 */

#include <ostream>
#include <iostream>
#include <fstream>
#include "CollatzCruncher.h"

const std::string FILENAME = "output";
const unsigned short CONSOLE_OUT = 1;
const unsigned short FILE_OUT = 2;

int main(void) {
    // Determine where to log output
    unsigned short whereToLog;
    do {
        std::cout << "Log the result to:\n";
        std::cout << std::to_string(CONSOLE_OUT) + " - Console\n";
        std::cout << std::to_string(FILE_OUT) + " - File\nResponse: ";
        std::cin >> whereToLog;
        if (whereToLog < CONSOLE_OUT || whereToLog > FILE_OUT)
            std::cout << "Invalid input...\n";
    } while (whereToLog < CONSOLE_OUT || whereToLog > FILE_OUT);

    // Configure output stream
    std::ostream* out;
    if (whereToLog == CONSOLE_OUT)
        out = &std::cout;
    else if (whereToLog == FILE_OUT)
        out = new std::ofstream(FILENAME);

    // Run the Collatz Conjecture Cruncher
    unsigned long long int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    CollatzCruncher(number, out).crunch();

    // Clean up
    if (whereToLog == FILE_OUT)
        delete out;
    return EXIT_SUCCESS;
}