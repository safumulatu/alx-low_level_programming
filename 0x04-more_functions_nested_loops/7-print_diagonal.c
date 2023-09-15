#include "main.h"

/**
 * print_diagonal - printing lines diagonal
 * @n: input variable
 *
 * Return: void
 */


void print_diagonal(int n)
{
	int safu, mulatu;

	if (n <= 0)
		_putchar('\n');
	for (safu = 0; safu < n; safu++)
	{
		for (mulatu = 0; mulatu < safu; mulatu++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
