#include <stdio.h>
#include <unistd.h>
/**
 * main - print alphabet in lower case except q and e
 *
 * Return: 0 if successful
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
