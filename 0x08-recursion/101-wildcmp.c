#include "main.h"

/**
 * wildcmp - Checks if two strings are identical considering '*' as wildcard.
 * @s1: The first string.
 * @s2: The second string with possible wildcard '*'.
 *
 * Return: 1 if the strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0') // Base case: both strings are empty, consider them identical
        return (1);

    if (*s2 == '*')
    {
        if (*s1 == '\0') // If s1 is empty, skip '*' in s2
            return (wildcmp(s1, s2 + 1));
        // Try matching s1 with '*' in s2 or skip '*' in s2
        return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
    }

    if (*s1 == *s2)
        return (wildcmp(s1 + 1, s2 + 1)); // Characters match, continue comparison

    return (0); // Characters do not match
}

