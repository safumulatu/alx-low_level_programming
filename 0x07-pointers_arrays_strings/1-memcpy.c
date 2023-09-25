#include "main.h"
/**
 * _memcpy - a function that copies 
 * @dest: memory where copied 
 * @src: memory to be copied
 * @n: no of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}

	return (dest);
}
