#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prototype
 * @separator: string
 * @n: number of arguments
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list enock;
	unsigned int i;

	if (separator == NULL)
	{
		return;
	}

	va_start(enock, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(enock, int));
		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(enock);
}
