#include "main.h"
#include <stdlib.h>

/**
 * _strdup - prototype
 * @str: input
 *
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *s;
	int count = 0;
	int n;
	char *m;

	while (str[count] != '\0')
	{
		count++;
		n = str[count];
	}

	s = malloc(n * sizeof(char)) + 1;

	m = _strdup(str)




return (s);

}
