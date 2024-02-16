#include <stdio.h>

/**
 * main - entry point
 * @argc: count
 * @argv: strings
 * Description: prints number of arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
