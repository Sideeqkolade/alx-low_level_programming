#include "main.h"
/**
 * _isalpha - checks for alphabetical character
 *
 * @c: c is an ascii xharacter
 *
 * Return: 1 if c is an alphabetic character, else return 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' and c <= 'Z')
		return (1);
	else
		return (0);
}
