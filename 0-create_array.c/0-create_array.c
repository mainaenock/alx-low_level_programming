#include "main.h"
#include <stdlib.h>

/**
 * create_array - prototype
 * @size: input
 * @c: input
 * Description: function that creates an array of chars
 *
 * Return: NULL and 0
 */

char *create_array(unsigned int size, char c)
{

char *ar;
unsigned int i;

ar = malloc(size * sizeof(char));

if (size == 0 || ar == NULL)
{
	return (NULL);
}
for (i = 0; i < size; i++)
{
	ar[i] = c;
}
return (ar);
}

