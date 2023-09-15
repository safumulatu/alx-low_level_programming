/*
 * File: 101-print_number.c
 * Auth: Safu Mulatu
 */

#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int z)
{
	unsigned int number = z;

	if (z < 0)
	{
		_putchar('-');
		number = -number;
	}

	if ((number / 10) > 0)
		print_number(number / 10);

	_putchar((number % 10) + '0');
}
