#include "main.h"
/**
 * print_most_numbers(void) - print numbes from 0 to 9, not printing 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '10'; c++)
	{
		if (!(c == '2' || c == '4'))
		{
			_putchar(c);
		}

		_putchar('\n');
}
