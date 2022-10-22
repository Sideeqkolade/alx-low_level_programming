#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; i++)
			{
				if ((size - i - 1) > j)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				_putchar('\n');
			}
		}
	}
}
