#include "main.h"

/**
 * print_numbers - print numbers from zero to nine
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	i = 0;
	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');

		_putchar ('\n');
	}
}
