#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prototype
 * @array: array of integers
 * @size: size of the array
 * @action: function pointer
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		(action)(array[i]);
	}
}
