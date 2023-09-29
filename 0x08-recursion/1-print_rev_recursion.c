#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: The string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
    if (*s) // Check if the current character is not the null terminator
    {
        _print_rev_recursion(s + 1); // Recursively call for the next character
        _putchar(*s); // Print the current character after recursion returns
    }
}

