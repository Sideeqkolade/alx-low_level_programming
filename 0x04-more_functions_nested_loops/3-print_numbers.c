#include "main.h"

/**
 * print_numbers - print numbers from zero to nine
 *
 * Return: Always 0 (success)
 */

void print_numbers(void)
{
	int num = '0';

	while (num <= '9')
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
