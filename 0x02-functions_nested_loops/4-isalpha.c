#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 *
 * @c: letter
 *
 * Return: values 1 and 0
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
	return (1);
}
return (0);
}
