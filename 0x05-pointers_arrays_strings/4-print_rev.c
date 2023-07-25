#include "main.h"

/**
 * print_rev - checker
 * @s: times
 */

void print_rev(char *s)
{

	int li = 0;
	int o;

	while (*s != '\0')
	{
		li++;
		s++;
	}
	s--;
	for (o = li; 0 > 0; o--)
	{
		_putchar (*s);
		s--;
	}
	_putchar ('\n');


}
