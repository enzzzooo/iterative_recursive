#include <iostream>
#include <string>

/*
 * topic        C++ programming: C++ functions for arrays of numbers using loops
 * program      C++ functions for arrays of numbers using loops
 * usage        ."/C++ functions for arrays of numbers using loops"
 * compile      g++ -o "C++ functions for arrays of numbers using loops" "C++ functions for arrays of numbers using loops.cpp"
 * description  Functions for arrays of numbers using loops
 *
 */

using namespace std;

int summation(const int numbers[], int size)
{
   int sum = 0;
   for (int i = 0; i < size; i++)
   {
      sum += numbers[i];
   }
   return sum;
   // returns the sum of the values in the array
}

int summationOddNumbers(const int numbers[], int size)
{
   int sum = 0;
   for (int i = 1; i < size; i += 2)
   {
      sum += numbers[i];
   }
   return sum;
   // returns the sum of the odd values in the array
}

int summationEvenNumbers(const int numbers[], int size)
{
   int sum = 0;
   for (int i = 2; i < size; i += 2)
   {
      sum += numbers[i];
   }
   return sum;
   // returns the sum of the even values in the array
}

int summationSquares(const int numbers[], int size)
{
   // returns the sum of the squares of the values in the array
}

int summationOddSquares(const int numbers[], int size)
{
   // returns the sum of the squares of the odd values in the array
}

int summationEvenSquares(const int numbers[], int size)
{
   // returns the sum of the squares of the even values in the array
}

int min(const int numbers[], int size)
{
   // returns the min value in the array
}

int max(const int numbers[], int size)
{
   // returns the max value in the array
}

bool find(const int numbers[], int size, int key)
{
   // returns true if the key is in the array and false otherwise
}

int main()
{
   const int SIZE = 15;

   int numbers[SIZE] = {1, 3, 2, 5, 7, 9, 10, 14, 2, 8, 11, 15, 25, 30, 0};
   // the code for the test cases goes here
   cout << "The summation of numbers is " << summation(numbers, SIZE) << "\n";
   cout << "The summation of odd numbers is " << summationOddNumbers(numbers, SIZE) << "\n";
   cout << "The summation of even numbers is " << summationEvenNumbers(numbers, SIZE) << "\n";
   cout << "The summation of the squares of numbers is" << summationSquares(numbers, SIZE) << "\n";
   cout << "The summation of the squares of even numbers is" << summationEvenSquares(numbers, SIZE) << "\n";
   cout << "The summation of the squares of odd numbers is" << summationOddSquares(numbers, SIZE) << "\n";
   cout << "The min value in numbers is" << min(numbers, SIZE) << "\n";
   cout << "The max value in numbers is" << max(numbers, SIZE) << "\n";
   int key = 99;
   cout << key << "is not in numbers" << "\n";
   int key2 = 25;
   cout << key2 << "is in numbers" << "\n";
   return 0;
}
