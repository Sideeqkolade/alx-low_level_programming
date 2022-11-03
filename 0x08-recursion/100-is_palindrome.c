#include "main.h"

/**
 * _strlen - return the length of string
 * @str: the string
 * Return: integer or length
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str + 1));
}

/**
 * check - check if a string is palindrome
 * @l: left
 * @r: right
 * @p: possible palindrome
 * Return: 1 or 0
 */

int check(int l, int r, char *p)
{
	if (l >= r)
		return (1);
	else if (p[l] != p[r])
		return (0);
	else
		return (check(l + 1, r - 1, p));
}

/**
 * is_palindrome - confirms a palindrome
 * @s: the string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (check(0, i, s));
}
