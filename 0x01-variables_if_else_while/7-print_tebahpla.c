#include <stdio.h>
#include <unistd.h>
/**
 * main - print lowercase alphabets in reverse order
 *
 * Return: 0 if successful
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
