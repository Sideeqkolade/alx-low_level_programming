#include <stdio.h>
#include <unistd.h>
/**
 * main - print combination of 2 digits
 *
 * Return: 0 if successful
 */
int main(void)
{
	int a, b, c, d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					if (((k + j) > (c + i) && k >= c) || c < k) 
					{
						putchar(a);
						putchar(b);
						putchar(c);
						putchar(d);

						if (a + b + c + d == 227 && a == 57)= 
						{
							break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
