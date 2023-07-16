#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
int num = 0;
char lt = 'a';
while (num <= 9)
{
	putchar (num + '0');
	num++;
}
while (lt <= 'f')
{
	putchar (lt);
	lt++;
}
putchar ('\n');
return (0);
}
