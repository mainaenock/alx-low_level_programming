#include "main.h"
#include <string.h>

/**
 * _strncat - function
 * @dest: destination
 * @src: source
 * @n: number of src characters
 *
 * Description: concatenate 2 strings
 * Return: dest
 */


char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
