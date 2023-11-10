#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function
 * @n: the count of arguments
 * @...: ipsi
 * Description: a function that adds
 * If n is 0 return 0
 *
 * Return: add
 */

int sum_them_all(const unsigned int n, ...)
{
	int add = 0;
	unsigned int i;
	va_list enock;

	if (n == 0)
	{
		return (0);
	}
	va_start(enock, n);
	for (i = 0; i < n; i++)
	{
		add = add + va_arg(enock, int);
	}
	return (add);
	va_end(enock);

}
