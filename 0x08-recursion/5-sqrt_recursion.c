#include "main.h"

int i_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - prototype
 * @n: input
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (i_sqrt_recursion(n, 0));
}

/**
 * i_sqrt_recursion - prototype
 * square root of a number
 * @n: input
 * @i: iterator
 *
 * Return: -1 , n
 */
int i_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (i_sqrt_recursion(n, i + 1));
}

