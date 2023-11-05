#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _realloc - function that reallocates memory block
 * @ptr: pointer
 * @old_size: the previous size
 * @new_size: the new size
 *
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{


	ptr = malloc(old_size);

	if (new_size == old_size)
	{
		return (ptr);
		free(ptr);

	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);

		return (ptr);
		free(ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		ptr = malloc(old_size + (new_size - old_size));
	}


	return (ptr);



}
