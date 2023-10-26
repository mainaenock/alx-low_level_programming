#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _print_rev_recursion - function
 * @s: pointer to string
 *
 * Desciption: function that prints a string reverse
 * Return: void
 */

void _print_rev_recursion(char *s)
{

	while (*s == '\0')
	{
		return;
	}
		_print_rev_recursion(s + 1);

	_putchar (*s);
}
