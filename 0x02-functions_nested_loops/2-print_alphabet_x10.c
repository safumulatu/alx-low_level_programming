#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int test = 0;
	char ro_letter;

	while (test++ <= 9)
	{
		for (ro_letter = 'a'; ro_letter <= 'z'; ro_letter++)
			_putchar(ro_letter);
		_putchar('\n');
	}
}
