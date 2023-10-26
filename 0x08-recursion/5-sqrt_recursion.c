#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - function
 * @n: number to find root
 * @guess: root
 * Description: function to find the square root
 * Return: sqrt
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_helper(n, 1));
}

int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}

	if (guess * guess > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, guess + 1));
}

