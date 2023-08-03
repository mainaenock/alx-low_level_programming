#include "main.h"

/**
 * factorial - the prototype
 * @n: input
 *
 * Return: 0 and -1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
