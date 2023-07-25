#include "main.h"

/**
 * _strlen - entry
 * @s: times
 *
 * Return: ..
 */

int _strlen(char *s)
{

	int li;

	li = 0;
	while (*s != '\0')
		{
			li++;
			s++;
		}

	return (li);
}
