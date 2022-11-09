#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of positive numbers
 * @argc: number of arguments
 * @argv: aray of arguments
 * Return: 0 if successful, 1 if error
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc < 2)
	{
		printf("%d", sum);

	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
