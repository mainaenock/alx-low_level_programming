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

	void *ptr2;

	ptr = malloc(old_size);

	if (new_size == old_size)
	{
		return (ptr);
		free(ptr);

	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);

		free(ptr);
		return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		ptr2 = malloc(new_size);
		memcpy(ptr2, ptr, old_size);
		free(ptr);
	}


	return (ptr2);



}
