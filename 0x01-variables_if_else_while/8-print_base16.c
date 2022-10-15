#include <stdio.h>
#include <unistd.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar('');
		}
	putchar('\n');
	return (0);
};
