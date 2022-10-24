#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i, j;

	i = *b;
	j = *a;
	*a = i;
	*b = j;
}
