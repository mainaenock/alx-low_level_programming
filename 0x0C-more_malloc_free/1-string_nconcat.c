#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - function to concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of characters
 *
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);

	}

	ptr = malloc(strlen(s1) + n + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	strcpy(ptr, s1);
	strncat(ptr, s2, n);

	return (ptr);

}
