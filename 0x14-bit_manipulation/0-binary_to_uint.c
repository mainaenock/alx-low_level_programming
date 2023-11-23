#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - prototype of the function
 * @b: pointer to string containing binary
 * Description: changes binary to int
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j = 0;

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

			j = j * 2 + (b[i] - '0');

		}




	return (j);

}

