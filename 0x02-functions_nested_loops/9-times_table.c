#include "main.h"

/**
 * times_table - checker
 *
 * return: ..
 */
void times_table(void)
{
int num, r, c, temp;
for (r = 0; r <= 9; r++)
{
	for (c = 0; c <= 9; c++)
	{
		num = r * c;
		temp = num;
		if (num > 9)
		{
		_putchar (num / 10 + '0');
		temp = num % 10;
		}
		_putchar (temp + '0');
		_putchar (',');
		_putchar (' ');
	}
	_putchar ('\n');
}
}
