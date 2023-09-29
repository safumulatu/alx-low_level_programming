#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base.
 * @y: The exponent.
 *
 * Return: The result of x^y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
    if (y < 0) // Check for negative exponent
    {
        return -1; // Return -1 to indicate an error
    }
    else if (y == 0) // Base case: Any number raised to the power of 0 is 1
    {
        return 1;
    }
    else
    {
        return x * _pow_recursion(x, y - 1); // Recursive call to compute power
    }
}
