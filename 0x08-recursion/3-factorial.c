#include "main.h"

/**
 * factorial - function
 * @n: number in question
 *
 * Description: function that returns a factorial of a given number
 * Return: if n < o return -1
 */

int factorial(int n)
{
	int s;

	while (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return 1;
	}
		s = n * factorial(n - 1);

		return (s);
}
