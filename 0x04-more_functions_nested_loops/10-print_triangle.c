#include "main.h"

/**
 * print_triangle - entry point
 * owned by safu mulatu
 * Description: Prints diagonals
 *@size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int R, H, S;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (R = 1; R <= size; R++)
		{
			for (S = size - R; S >= 1; S--)
			{
				_putchar(' ');
			}
			for (H = 1; H <= R; H++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
