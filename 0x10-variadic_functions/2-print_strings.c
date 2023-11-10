#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prototype
 * @separator: string
 * @n: count
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list enock;

	va_start(enock, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(enock, char *) == NULL)
		{
			printf("nil");
		}
	}
	va_end(enock);

	va_start(enock, n);

	for (i = 0; i < n; i++)
	{

		printf("%s", va_arg(enock, char *));

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(enock);


}
