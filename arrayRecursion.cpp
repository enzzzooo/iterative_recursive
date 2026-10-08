#include <iostream>
#include <string>
using namespace std;
/*
 * topic        C++ programming: C++ functions for arrays of numbers using recursion
 * program      C++ functions for arrays of numbers using recursion
 * usage        ."/C++ functions for arrays of numbers using recursion"
 * compile      g++ -o "C++ functions for arrays of numbers using recursion" "C++ functions for arrays of numbers using recursion.cpp"
 * description  Functions for arrays of numbers using recursion
 *
 */

int summation(const int numbers[], int index)
{
    if (index == 0)
    {
        return 0;
    }
    return numbers[index - 1] + summation(numbers, index - 1);
    // returns the sum of the values in the array, recursion begins traversing the array at index SIZE-1, and ends at index 0, the base case
}

int summationOddNumbers(const int numbers[], int index)
{
    if (index == 0)
    {
        return 0;
    }
    if (numbers[index - 1] % 2 != 0)
    {
        return numbers[index - 1] + summationOddNumbers(numbers, index - 1);
    }
    return summationOddNumbers(numbers, index - 1);
    // returns the sum of the odd values in the array
}

int summationEvenNumbers(const int numbers[], int index)
{
    if (index == 0)
    {
        return 0;
    }
    if (numbers[index - 1] % 2 == 0)
    {
        return numbers[index - 1] + summationEvenNumbers(numbers, index - 1);
    }
    return summationEvenNumbers(numbers, index - 1);
    // returns the sum of the even values in the array
}

int summationSquares(const int numbers[], int index)
{
    if (index == 0)
    {
        return 0;
    }
    return numbers[index - 1] * numbers[index - 1] + summationSquares(numbers, index - 1);
    // returns the sum of the squares of the values in the array
}

int summationOddSquares(const int numbers[], int index)
{
    if (index == 0)
    {
        return 0;
    }
    int new_index = index - 1;
    if (numbers[new_index] % 2 != 0)
    {
        return numbers[new_index] * numbers[new_index] + summationOddSquares(numbers, new_index);
    }
    return summationOddSquares(numbers, new_index);
    // returns the sum of the squares of the odd values in the array
}

int summationEvenSquares(const int numbers[], int index)
{
    if (index == 0)
    {
        return 0;
    }
    int new_index = index - 1;
    if (numbers[new_index] % 2 == 0)
    {
        return numbers[new_index] * numbers[new_index] + summationEvenSquares(numbers, new_index);
    }
    return summationEvenSquares(numbers, new_index);
    // returns the sum of the squares of the even values in the array
}

int min(const int numbers[], int index)
{
    if (index == 1)
    {
        return numbers[0];
    }
    int lowest = min(numbers, index - 1);
    if (numbers[index - 1] < lowest)
    {
        return numbers[index - 1];
    }
    return lowest;
    // returns the min value in the array
}

int max(const int numbers[], int index)
{
    if (index == 1)
    {
        return numbers[0];
    }
    int highest = max(numbers, index - 1);
    if (numbers[index - 1] > highest)
    {
        return numbers[index - 1];
    }
    return highest;
    // returns the max value in the array
}

bool find(const int numbers[], int index, int key)
{
    if (index == 0)
    {
        return false;
    }
    if (numbers[index - 1] == key)
    {
        return true;
    }
    return find(numbers, index - 1, key);
    // returns true if the key is in the array and false otherwise
}

int main()
{
    const int SIZE = 15;

    int numbers[SIZE] = {1, 3, 2, 5, 7, 9, 10, 14, 2, 8, 11, 15, 25, 30, 0};

    // the code for the test cases goes here
    cout << "The summation of numbers is " << summation(numbers, SIZE) << "\n";
    cout << "The summation of even numbers is " << summationEvenNumbers(numbers, SIZE) << "\n";
    cout << "The summation of odd numbers is " << summationOddNumbers(numbers, SIZE) << "\n";
    cout << "The summation of the squares of numbers is " << summationSquares(numbers, SIZE) << "\n";
    cout << "The summation of the squares of odd numbers is " << summationOddSquares(numbers, SIZE) << "\n";
    cout << "The summation of the squares of even numbers is " << summationEvenSquares(numbers, SIZE) << "\n";
    cout << "The min value in numbers is " << min(numbers, SIZE) << "\n";
    cout << "The max value in numbers is " << max(numbers, SIZE) << "\n";
    int key = 99;
    cout << key << " is not in numbers " << "\n";
    int key2 = 25;
    cout << key2 << " is in numbers " << "\n";
    return 0;
}
