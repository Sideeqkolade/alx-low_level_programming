#include "main.h"
/**
 * _islower - check for lowercase character
 * @c: c is an ascii character
 * Return: 1 if c is lower, else return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
