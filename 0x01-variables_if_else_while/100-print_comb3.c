#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
int d1, d2;
d1 = 0;
d2 = 0;
while (d1 <= 9)
{
d2 = d1 + 1;
	while (d2 <= 9)
	{
	putchar (d1 + '0');
	putchar (d2 + '0');
	if (d1 != 8 || d2 != 9)
	{
	putchar (',');
	putchar (' ');
	}
	d2++;
	}
	d1++;
	d2 = 0;
}
putchar ('\n');
return (0);
}
