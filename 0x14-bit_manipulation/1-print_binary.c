#include "main.h"
#include <stdio.h>

/*
 * Description - Debug option: To enable debugging, define DEBUG macro.
 *                For checker validation, use the checker version in the readme.
 */

/**
 * debug_1 - Print debug statements
 *
 * @n: Value of n
 * @length: Length of n
 * @mask: Mask of n
 */
void debug_1(unsigned long int n, int length, unsigned long int mask)
{
	#ifdef DEBUG
	printf("Length of %lu (n) is %i and mask (original value 1) is %lu based on [length of n - 1] == %i.\n\n", n, (length + 1), mask, length);
	#endif
}

/**
 * debug_2 - Print debug statements
 *
 * @n: Value of n
 * @mask: Mask of n
 */
void debug_2(unsigned long int n, unsigned long int mask)
{
	#ifdef DEBUG
	printf("Value of n is %lu, value of mask is %lu, and value of [n & mask] is %lu.\n\n", n, mask, (n & mask));
	#endif
}

/**
 * debug_3 - Print debug statements
 *
 * @mask: Mask of value n
 */
void debug_3(unsigned long int mask)
{
	#ifdef DEBUG
	printf("Value of mask is %lu after right shifting by one.\n\n", mask);
	#endif
}

/**
 * _length - Find the length of @n
 *
 * @n: Value to find its length
 * Return: Length
 */
int _length(unsigned long int n)
{
	int length = 0;

	while (n > 0)
	{
		#ifdef DEBUG
		printf("Value of n is %lu before right shifting by one.\n\n", n);
		#endif

		length++;
		n >>= 1; /* Shift n to the right by 1 */

		#ifdef DEBUG
		printf("Value of n is %lu after right shifting by one.\n\n", n);
		#endif
	}

	length--;

	return (length);
}

/**
 * print_binary - A function that converts a decimal to binary
 *
 * @n: Decimal number to convert
 */
void print_binary(unsigned long int n)
{
	int length;
	unsigned long int mask = 1;

	length = _length(n);

	if (length > 0) /* Create mask based on the length of the number */
		mask <<= length; /* Shift mask to the left by length */

	#ifdef DEBUG
	debug_1(n, length, mask);
	#endif

	while (mask > 0)
	{
		#ifdef DEBUG
		debug_2(n, mask);
		#endif

		if (n & mask) /* If n & mask == 1, print 1 */
			_putchar('1');
		else /* Else if n & mask == 0, print 0 */
			_putchar('0');

		mask >>= 1; /* Shift mask to the right by 1 */

		#ifdef DEBUG
		debug_3(mask);
		#endif
	}
}
