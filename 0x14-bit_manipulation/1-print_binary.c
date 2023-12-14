#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of an unsigned long
 * @n: the decimal
 *
 * Description: changing dec to binary
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int size, mask;
	int i, zeros = 1;

	size = sizeof(unsigned long int) * 8;

	for (i = size - 1; i >= 0; i--)
	{
		if (n == 0)
		{
			_putchar ('0');
			break;
		}
		mask = 1ul << i;

		if ((n & mask) != 0)
		{
			_putchar ('1');
			zeros = 0;
		}
		else if (!zeros)
		{
			_putchar ('0');
		}
	}

}
