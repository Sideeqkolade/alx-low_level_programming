#include "main.h"
/**
 * print_most_numbers(void) - print numbes from 0 to 9, not printing 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (!(num == '2' || num == '4'))
		{
			_putchar(num);
		}

		_putchar('\n');
}
