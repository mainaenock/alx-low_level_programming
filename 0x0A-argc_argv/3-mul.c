#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: counter
 * @argv: vector counter
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int num1, num2, sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	sum = num1 * num2;

	printf("%d\n", sum);
	return (0);

}

