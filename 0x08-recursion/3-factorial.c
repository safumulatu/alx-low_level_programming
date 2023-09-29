#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to find the factorial of.
 *
 * Return: The factorial of n, or -1 if n is negative (error).
 */
int factorial(int n)
{
    if (n < 0) // Check for negative input
    {
        return -1; // Return -1 to indicate an error
    }
    else if (n == 0 || n == 1) // Base case: factorial of 0 and 1 is 1
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1); // Recursive call to compute factorial
    }
}
