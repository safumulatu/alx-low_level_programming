#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array of integers
 * Owned Safu
 * @a: int to check
 * @n: int to check
 * Return: 0 is success
 */
void print_array(int *a, int n)
{
	int saf;

	for (saf = 0; saf < n; saf++)
		if (saf != n - 1)
		printf("%d, ", a[saf]);
		else
			printf("%d", a[saf]);
printf("\n");
}
