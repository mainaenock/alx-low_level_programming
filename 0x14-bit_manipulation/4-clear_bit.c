#include "main.h"
#include <stdio.h>

/**
 * clear_bit - prototype
 * @n: binary string
 * @index: the position
 *
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	i = sizeof(unsigned long int) * 8;

	if (index >= i)
	{
		return (-1);
	}
	else
	{
		*n &= ~(1UL << index);
		return (1);
	}
}
