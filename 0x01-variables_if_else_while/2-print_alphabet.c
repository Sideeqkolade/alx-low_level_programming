
#include <stdio.h>
#include <unistd.h>
/**
 * main - print the letters of the Alphabet
 *
 * Return: 0 if successful
 */
int main(void)
{
	int ch;

	for (ch = 'a', ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar("\n");
	return (0);
}
