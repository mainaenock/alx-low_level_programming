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

	char *str;
	unsigned int l1, l2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	l1 = strlen(s1);
	l2 = strlen(s2);

	if (n >= l2)
	{
		n = l2;
	}

	str = malloc(l1 + l2 + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	strcpy(str, s1);
	strncat(str, s2, n);

	return (str);


}
