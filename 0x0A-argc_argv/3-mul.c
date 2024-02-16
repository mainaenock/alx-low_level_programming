#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: count
 * @argv: strings
 * Description: multiplies two numbers
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	if (num1 < 0)
	{
		num1 *= -1;
	}
	if (num2 < 0)
	{
		num2 *= -1;
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	sum = num1 * num2;

	printf("%d\n", sum);

	return (0);
}
