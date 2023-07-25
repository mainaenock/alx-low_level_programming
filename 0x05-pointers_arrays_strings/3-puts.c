#include "main.h"

/**
 * _puts - checker
 * @str: times
 *
 * Return: ..
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str++);
	}
	_putchar ('\n');

}
