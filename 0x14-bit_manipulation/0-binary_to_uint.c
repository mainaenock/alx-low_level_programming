#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - binary to unsigned int
 * @b: string binary numbers
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int power = 1, decimal = 0;
	int i, len;

	if (b == NULL)
	{
		return (0);
	}
	len = strlen(b);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		else
		{
			if (b[i] == '1')
			{
				decimal = decimal + power;
			}
			power = power * 2;
		}
	}
	return (decimal);
}
