#include "main.h"
/**
 *_memcpy - prototype
 *@dest: memory
 *@src: memory where copy
 *@n: size
 *
 *Return: (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}


