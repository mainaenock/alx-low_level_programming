#include "main.h"

/**
 * set_bit - sets bit to 1
 * @n: number
 * @index: index
 *
 * Return: 1 and -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		*n = *n | (1UL << index);
	}
	return (1);
}
