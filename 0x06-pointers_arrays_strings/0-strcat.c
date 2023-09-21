#include "main.h"

/**
 * _memset - a function that fills a memory with a constant byte
 *
 * @s: pointer to the no of memory byte
 * @b: a byte constant
 * @n: no of byte of the memory
 *
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*ptr++ = b;

	return (s);
}

