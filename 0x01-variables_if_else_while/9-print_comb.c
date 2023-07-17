#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
int num = 1;
putchar ('0');
while (num <= 9)
{
	putchar (',');
	putchar (' ');
	putchar (num + '0');
	num++;
}
return (0);
}
