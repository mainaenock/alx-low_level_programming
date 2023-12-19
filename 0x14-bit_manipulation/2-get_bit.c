#include "main.h"
#include <stdio.h>

/**
 * get_bit - prototype
 * @n: the long number/binary
 * @index: the index
 *
 * Return: the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	i = sizeof(unsigned long int) * 8;

	if (index >= i)
	{
		return (-1);
	}
	else
	{
		return ((n << index) & 1);
	}

}
