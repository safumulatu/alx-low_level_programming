#include "main.h"

/**
 * _puts_recursion - Recursively prints a string followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
    if (*s)
    {
        _putchar(*s); // Print the current character

        // Move to the next character in the string and continue the recursion
        _puts_recursion(s + 1);
    }
    else
    {
        _putchar('\n'); // When the end of the string is reached, print a new line
    }
}
