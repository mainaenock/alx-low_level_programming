#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: input
 * Return: ..
 */
void puts_half(char *str)
{
	int a, n, li;

	li = 0;

	for (a = 0; str[a] != '\0'; a++)
		li++;

	n = (li / 2);

	if ((li % 2) == 1)
		n = ((li + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar (str[a]);
	_putchar ('\n');
}

