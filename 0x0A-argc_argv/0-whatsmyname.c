#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - entry point
 * Description: describes the program
 *
 * Return: alwys 0
 */

int main(int argc, char *argv[])
{

	(void)argc;
	if (argv[0] != NULL)
	{
		printf("%s", argv[0]);
	}

	return (0);
}
