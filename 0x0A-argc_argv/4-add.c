#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count
 * @argv: strings
 * Description: adds digits only
 *
 * Return: 0 and 1 for error
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int num, i;
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
	
	for(i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			num = atoi(argv[i]);
			sum += num;
		}
	}
	printf("%d\n", sum);
	}
	return (0);
}
