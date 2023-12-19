#include "main.h"
#include <stdio.h>

/**
 * set_bit - prototype
 * @n: the binary string
 * @index: the postion
 *
 * Return: 1 and -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	i = ((sizeof(unsigned long int)) * 8);
	
	if (index > i)
	{
		return (-1);
	}
	else
	{
		return (*n | (1UL << index));
	}

	return (1);


}
