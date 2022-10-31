#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: the string
 * @b: the constant byte
 * @n: number of bytes to be filled
 * Return: Returns a pointer to the memory areas s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
