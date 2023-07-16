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
	putchar (num + '0');
	putchar (',');
	putchar ('\t');
	num++;
}
putchar ('\n');
return (0);
}
