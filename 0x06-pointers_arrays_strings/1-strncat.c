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
	int K, L;

	for (K = 0; dest[K] != '\0'; K++)
	{
		continue;
	}
	for (j = 0; src[L] != '\0' && L < n; L++)
	{
		dest[K + L] = src[L];
	}
	dest[K + L] = '\0';
	return (dest);
}
