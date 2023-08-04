#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: counter
 * @argv: vector counter
 *
 * Return: 0 and 1
 */

int main(int argc, char *argv[])
{
	int num = 0, i = 1, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else if (i > 0)
	{

		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);
			if (num == 0)
			{
				printf("Error\n");
				return (0);
			}
			sum += num;
		}
		printf("%d\n", sum);
		return (0);
	}
return (0);

}
