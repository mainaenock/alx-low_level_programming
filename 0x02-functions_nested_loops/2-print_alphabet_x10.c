#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - make alpha
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
char a;
int i;
for (i = 1; i <= 10; i++)
{
	for (a = 'a'; a <= 'z'; a++)
	{
		putchar (a);
	}
	putchar ('\n');
}
}
