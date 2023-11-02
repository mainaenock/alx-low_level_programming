#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - function that creates an array of integers
 * @min: the minimum value of the array
 * @max: the maximum value of the array
 *
 * Return: NULL
 */

int *array_range(int min, int max)
{
	int *ptr, i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min) + 1;

	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= size; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
