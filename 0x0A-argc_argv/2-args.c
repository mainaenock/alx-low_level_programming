#include <stdio.h>

/**
 * main - entry point
 * @argc: counter
 * @argv: vector counter
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

