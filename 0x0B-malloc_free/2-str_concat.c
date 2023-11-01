#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: NUL
 */

char *str_concat(char *s1, char *s2)
{
	char *con;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	con = malloc(strlen(s1) + strlen(s2) + 1);
	if (con == NULL)
	{
		return (NULL);
	}

	strcpy(con, s1);
	strcat(con, s2);


	return (con);
	free(con);
}
