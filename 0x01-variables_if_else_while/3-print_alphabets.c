#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
char lt, lts;
lt = 'a';
lts = 'A';
while (lt <= 'z')
{
putchar (lt);
lt++;
}
while (lts <= 'Z')
{
putchar (lts);
lts++;
}
putchar ('\n');
return (0);
}
