#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - function that duplicates
 * @str: string to be duplicated
 *
 * Return: NULL
 */

char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	dup = malloc(strlen(str) + 1);

	if (dup == NULL)
	{
		return (NULL);
	}

	strcpy(dup, str);

	return (dup);

	free(dup);

}
