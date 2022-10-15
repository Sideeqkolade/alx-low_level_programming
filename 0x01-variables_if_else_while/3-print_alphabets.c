#include <stdio.h>
#include <unistd.h>
/**
 * main - prints alphabet in uppercase, then lower case
 *
 * Return: 0 if successful
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
