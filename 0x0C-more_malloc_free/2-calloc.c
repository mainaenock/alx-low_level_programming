#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - function allocating mem to array
 * @nmemb: size of array
 * @size: size of data type
 *
 * Return: Null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);

}
