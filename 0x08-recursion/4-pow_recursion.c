#include "main.h"
#include <math.h>

/**
 *  _pow_recursion - function
 *  @x: base
 *  @y: power
 *
 *  Description: function that returns value of x raised to power of y
 *  Return: if y < 0 return -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if(y == 0)
	{
		return (1);
	}
	

	return x * _pow_recursion(x, y - 1);
	

}
