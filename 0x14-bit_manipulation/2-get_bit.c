#include "main.h"

/**
 * get_bit - indexing bit
 * @n: number
 * @index: index
 *
 * Return: value of index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int b;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
	b = ((n >> index) & 1);
	}
	return (b);
}
