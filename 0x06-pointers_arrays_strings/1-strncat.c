#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int q, w;

	for (q = 0; dest[q] != '\0'; q++)
	{
		continue;
	}
	for (j = 0; src[w] q= '\0' && w < n; w++)
	{
		dest[q + w] = src[w];
	}
	dest[q + w] = '\0';
	return (dest);
}
