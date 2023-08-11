#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - prototype
 * @s1: input
 * @s2: input
 * @n: input
 *
 * Return: null and pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		strcat(s1, s2);
	}

	strncat(s1, s2, n);
	str = malloc(strlen(s1)+1);

	if (str == NULL)
	{
		return (NULL);
	}
	strcpy(str, s1);
	for (i = 0; str[i] != '\0'; i++)
	{
	_putchar (str[i]);
	}
	return (str);


}
