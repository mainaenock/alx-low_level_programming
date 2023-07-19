#include "main.h"

/**
 * jack_bauer - the checker
 *
 * void: return
 *
 * Return: ..
 */
void jack_bauer(void)
{
int hh, ss;
for (hh = 0; hh <= 23; hh++)
{
	for (ss = 0; ss <= 59; ss++)
	{
		_putchar (hh / 10 + '0');
		_putchar (hh % 10 + '0');
		_putchar (':');
		_putchar (ss / 10 + '0');
		_putchar (ss % 10 + '0');
		_putchar ('\n');
	}
}
}
