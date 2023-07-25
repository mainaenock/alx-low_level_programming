#include "main.h"

/**
 * print_triangle - checker
 * @size: the no. of times
 *
 * Return: ..
 */
void print_triangle(int size)
{
int i, j;

if (size <= 0)
{
	_putchar ('\n');
}
else
{
	for (i = 1; i <= size; i++)
	{
		for (j = size; j > i; j--)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar ('\n');
	}
}
}
