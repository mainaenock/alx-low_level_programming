#include "main.h"
#include <stdlib.h>

/**
 * create_array - prototype
 * @size: the size of space alocated
 * @c: the elements of the space
 *
 * Return: the pointer
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int count;

	arr = malloc(size * sizeof(char));

	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	else
	{
	for (count = 0; count < size; count++)
	{
		arr[count] = c;
	}
	}


	return (arr);
}
