#include "main.h"

/**
 * more_numbers - checker
 *
 * Return: ..
 */
void more_numbers(void)
{
int r, c;
for (r = 0; r < 10; r++)
{
	for (c = 0; c <= 14; c++)
	{
		if (c > 9)
		{
		_putchar ('1');
		}
		_putchar (c % 10 + '0');
	}
	_putchar ('\n');
}
}
