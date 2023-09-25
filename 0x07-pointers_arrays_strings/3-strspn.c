#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: the initial segment of
 *
 * @accept: which consist only of bytes from
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int l = 0, r, y;

	for (x = 0; s[r] != '\0'; r++)
	{
		if (s[r] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[r] == accept[y])
					l++;
			}
		}
		else
			return (l);
	}
		return (l);

}
