#include "main.h"

/**
 * _puts_recursion - the prototype
 * @s: input
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}
	else
	{
		_putchar (*s);
		_put_recursion(s + 1);
	}
}
