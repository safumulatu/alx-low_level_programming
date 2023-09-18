#include "main.h"
/**
 * print_rev - print a string in reverse
 *
 * @s: the string input to be reversed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int j;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}

	for (j--; j >= 0; j--)
	_putchar(s[j]);
	_putchar('\n');
}
