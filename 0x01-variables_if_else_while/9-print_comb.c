#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
int num = 0;
while (num <= 9)
{
	if (num != 0 && num <= 9)
	{
	putchar (',');
	putchar (' ');
	}
	putchar (num + '0');
	num++;
}
putchar ('\n');
return (0);
}
