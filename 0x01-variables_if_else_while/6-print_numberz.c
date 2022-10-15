#include <stdio.h>
#include <unistd.h>
/**
 * main - print all single digits of base 10 from 0 using putchar
 *
 * Return: 0 if successful
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
