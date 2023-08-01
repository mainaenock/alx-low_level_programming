#include "main.h"

/**
 * _memset - the prototype
 * @s: first
 * @b: second
 * @n: int
 *
 * Return: (s);
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);



}
