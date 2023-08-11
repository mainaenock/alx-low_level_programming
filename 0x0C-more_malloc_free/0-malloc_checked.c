#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - prototype
 * @b - the size
 *
 * Return: str
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
	{
		exit(98);
	}

	return (str);

}
