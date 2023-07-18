#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - make alphabets
 *
 * Return: Always 0
 *
 */
void print_alphabet(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
	putchar (a);
}
putchar ('\n');
}
