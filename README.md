# **Collatz Conjecture Cruncher**

Crunches the numbers for the Collatz Conjecture! Accepts an integer as input and outputs its resulting path when the Collatz Conjecture is applied.

## **Author**

Justin Thoreson

## **Build**

To build the Collatz Conjecture Cruncher, run:
```
make
```

## **Usage**

To execute the Collatz Conjecture Cruncher, run:
```
make run
```

Enter an integer value when prompted with:
```
Enter a number: 
```

## **Output**

The Collatz Conjecture Cruncher writes the resulting path of the provided number to an output stream (in this case, the main program configures an output file stream).

For example, when providing the number 3, the path appears as follows:
```
Number is: 3
Odd, multiplying by three, adding one...
Result is 10

Number is: 10
Even, dividing by two...
Result is 5

Number is: 5
Odd, multiplying by three, adding one...
Result is 16

Number is: 16
Even, dividing by two...
Result is 8

Number is: 8
Even, dividing by two...
Result is 4

Number is: 4
Even, dividing by two...
Result is 2

Number is: 2
Even, dividing by two...
Result is 1


```

## **Files**

* `collatz.cpp` - Runs the Collatz Conjecture Cruncher program
* `CollatzCruncher.h` - Collatz Conjecture Cruncher class
* `CollatzCruncher.cpp` - Collatz Conjecture Cruncher implementation
* `Makefile` - Builds the Collatz Conjecture Cruncher program