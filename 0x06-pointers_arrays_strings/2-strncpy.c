#include "main.h"
#include <string.h>

/**
 * _strncpy - function
 *
 * @dest: destination
 * @src: source
 * @n: number of characters being copied
 *
 * Description: strncpy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
