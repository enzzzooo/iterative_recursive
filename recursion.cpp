#include <iostream>
#include <string>

/*
 * topic        C++ programming: functions using recursion
 * program      C++ functions using recursion
 * usage        ."/C++ functions using recursion"
 * compile      g++ -o "C++ functions using recursion" "C++ functions using recursion.cpp"
 * description  Functions using recursion
 *
 */

using namespace std;

int summation(int n)
{
    // returns the sum 1 + 2 + 3 + ... + (n-1) + n
}

int summationOddNumbers(int n)
{
    // returns the sum 1 + 3 + 5 + ... + (n-2) + n, where n is odd
}

int summationEvenNumbers(int n)
{
    // returns the sum 2 + 4 + 6 + ... + (n-2) + n, where n is even
}

int summationSquares(int n)
{
    // returns the sum 1 + 4 + 9 + 16 + ... + (n-1)^2 + n^2
}

int summationOddSquares(int n)
{
    // returns the sum 1 + 9 + 25 + ... + (n-2)^2 + n^2, where n is odd
}

int summationEvenSquares(int n)
{
    // returns the sum 4 + 16 + 36 + ... + (n-2)^2 + n^2, where n is even
}

int factorial(int n)
{
    // returns 1 x 2 x 3 x ... x (n-1) x n, where n >= 0
}

int product(int n, int m)
{
    // returns n*m by adding n m times, where n >=0, and m >= 0
}

int power(int base, int exponent)
{
    // returns base^exponent by multiplying base exponent times, where base >=0, and exponent >= 0
}

int log2(int n)
{
    // returns the log2 of n by dividing it by 2 multiple times, where n is a power of 2 and n >=1
}

int quotient(int dividend, int divisor)
{
    // returns the quotient of the integer division by subtracting the divisor to the dividend multiple times, where dividend >=0, and divisor >= 1.
    // For example, quotient(9, 2) returns 4
}

int remainder(int dividend, int divisor)
{
    // returns the remainder of the integer division by subtracting the divisor to the dividend multiple times, where dividend >=0, and divisor >= 1.
    // For example, remainder(9, 2) returns 1
}

bool isMultiple(int dividend, int divisor)
{
    // returns true if the dividend is divisible by the divisor and false otherwise, where dividend >=0, and divisor >= 1
    // For example, isMultiple(10, 2) returns true
}