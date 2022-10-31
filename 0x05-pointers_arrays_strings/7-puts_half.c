#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints the last half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int a, b = 0;

	if ((_strlen(str) % 2) != 0)
	{
		b++;
	}
	for (a = ((_strlen(str) + b) / 2); a < _strlen(str); a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
