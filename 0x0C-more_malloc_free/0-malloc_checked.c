#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - prototype
 * @b - the size
 *
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	int *str;

	str = malloc(sizeof(b));
	if (str == NULL)
	{
		exit (98);
	}


	return (str);

}
