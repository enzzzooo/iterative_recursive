#include <iostream>
#include <string>

/*
 * topic        C++ programming: functions using loops
 * program      C++ functions using loops
 * usage        ."/C++ functions using loops"
 * compile      g++ -o "C++ functions using loops" "C++ functions using loops.cpp"
 * description  Functions using loops
 *
 */

using namespace std;

int totalmation(int n)
{
   // returns the total 1 + 2 + 3 + ... + (n-1) + n
   int total = 0;
   for (int i = 1; i <= n; i++)
   {
      total += i;
   };
   return total;
}

int totalmationOddNumbers(int n)
{
   int total = 0;
   for (int i = 1; i <= n; i += 2)
   {
      total += i;
   }
   return total;
   // returns the total 1 + 3 + 5 + ... + (n-2) + n, where n is odd
}

int totalmationEvenNumbers(int n)
{
   int total = 0;
   for (int i = 2; i <= n; i += 2)
   {
      total += i;
   }
   return total;
   // returns the total 2 + 4 + 6 + ... + (n-2) + n, where n is even
}

int totalmationSquares(int n)
{
   int total = 0;
   for (int i = 1; i <= n; i++)
   {

      total += i * i;
   }
   return total;

   // returns the total 1 + 4 + 9 + 16 + ... + (n-1)^2 + n^2
}

int totalmationOddSquares(int n)
{
   int total = 0;
   for (int i = 1; i <= n; i += 2)
   {

      total += i * i;
   }
   return total;
   // returns the total 1 + 9 + 25 + ... + (n-2)^2 + n^2, where n is odd
}

int totalmationEvenSquares(int n)
{
   int total = 0;
   for (int i = 2; i <= n; i += 2)
   {

      total += i * i;
   }
   return total;

   // returns the total 4 + 16 + 36 + ... + (n-2)^2 + n^2, where n is even
}

int factorial(int n)
{
   int total = 1;
   for (int i = 1; i <= n; i++)
   {

      total *= i;
   }
   return total;
   // returns 1 x 2 x 3 x ... x (n-1) x n, where n >= 0
}

int product(int n, int m)
{
   int total = 0;
   for (int i = 0; i < m; i++)
   {

      total += n;
   }
   return total;
   // returns n*m by adding n m times, where n >=0, and m >= 0
}

int power(int base, int exponent)
{
   int total = 1;
   for (int i = 0; i < exponent; i++)
   {

      total *= base;
   }
   return total;
   // returns base^exponent by multiplying base exponent times, where base >=0, and exponent >= 0
}

int log2(int n)
{
   int total = 0;
   for (; n > 1; n /= 2)
   {
      // add one to total, log result
      total++;
   }
   return total;
   // returns the log2 of n by dividing it by 2 multiple times, where n is a power of 2 and n >=1
}

int quotient(int dividend, int divisor)
{
   int total = 0;
   for (; dividend >= divisor; dividend -= divisor)
   {
      // add one to total, log result
      total++;
   }
   return total;
   // returns the quotient of the integer division by subtracting the divisor to the dividend multiple times, where dividend >=0, and divisor >= 1
   // For example, quotient(9, 2) returns 4
}

int remainder(int dividend, int divisor)
{
   for (; dividend >= divisor; dividend -= divisor)
   {
   }
   return dividend;
   // returns the remainder of the integer division by subtracting the divisor to the dividend multiple times, where dividend >=0, and divisor >= 1
   // For example, remainder(9, 2) returns 1
}

bool isMultiple(int dividend, int divisor)
{
   for (; dividend >= divisor; dividend -= divisor)
   {
   }
   if (dividend == 0)
   {
      return true;
   }
   return false;

   // returns true if the dividend is divisible by the divisor and false otherwise, where dividend >=0, and divisor >= 1
   // For example, isMultiple(10, 2) returns true
}
int main()
{
   cout << "totalmation(5): " << totalmation(5) << "\n";
   cout << "totalmationOddNumbers(5): " << totalmationOddNumbers(5) << "\n";
   cout << "totalmationEvenNumbers(6): " << totalmationEvenNumbers(6) << "\n";

   cout << "totalmationSquares(4): " << totalmationSquares(4) << "\n";
   cout << "totalmationOddSquares(5): " << totalmationOddSquares(5) << "\n";
   cout << "totalmationEvenSquares(6): " << totalmationEvenSquares(6) << "\n";

   cout << "factorial(5): " << factorial(5) << "\n";
   cout << "product(4, 3): " << product(4, 3) << "\n";
   cout << "power(2, 3): " << power(2, 3) << "\n";
   cout << "log2(8): " << log2(8) << "\n";

   cout << "quotient(9, 2): " << quotient(9, 2) << "\n";
   cout << "remainder(9, 2): " << remainder(9, 2) << "\n";

   cout << "isMultiple(10, 2): " << isMultiple(10, 2) << "\n";
   cout << "isMultiple(9, 2): " << isMultiple(9, 2) << "\n";
}
