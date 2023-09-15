/*
 * File: 8-print_square.c
 * Auth: Safu mulatu
 */

#include "main.h"

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int height, widt;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (widt = 0; widt < size; widt++)
				_putchar('#');

			if (height == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
