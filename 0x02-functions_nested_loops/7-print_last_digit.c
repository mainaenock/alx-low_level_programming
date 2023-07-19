#include "main.h"

/**
 * print_last_digit - this checks code
 *
 * @c: the int
 *
 * Return: 0
 */
int print_last_digit(int c)
{
int num;
num = c % 10;
if (num < 0)
{
	num = num * -1;
}
	_putchar (num + '0');
	return (num);
}
