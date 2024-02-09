#include "main.h"

/**
 * clear_bit - set to zero
 * @n: number to be changed
 * @index: index
 *
 * Return: 1 and -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		*n = *n & ~(1UL << index);
	}
	return (1);
}
