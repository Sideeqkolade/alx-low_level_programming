#include <stdio.h>
#include "main.h"

/**
 * main - prints the result of multplication
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 if there is error and 0 for Success
 */

int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%d\n", mul);
	return (0);
}
