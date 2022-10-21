#include "main.h"

/**
 * print_numbers - print the numbers from 0 to 9 followed
 * by a new line
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for (c >= '0' && c <= '9')
	{
		_putchar(c);
	}
	_putchar('\n');
}
