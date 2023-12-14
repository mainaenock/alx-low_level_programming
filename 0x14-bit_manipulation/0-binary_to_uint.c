#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - prototype
 * @b: string of the chars 0 and 1
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, result = 0;

	if (b == NULL)
	{
		return (0);
	}
		for (i = 0; b[i] != '\0'; i++)
		{
			if (b[i] != '0' && b[i] != '1')
			{
				return (0);
			}
			result = result * 2 + (b[i] - '0');

		}
	return (result);
}
