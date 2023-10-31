#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - function that creates an array of chars,r.
 * @size: number of letters
 * @c: the string
 *
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *m;


	if (size == 0)
	{
		return (NULL);
	}

	m = malloc(sizeof(char) * size);

	if (m == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		m[i] = c;

	}
	return (m);
}
