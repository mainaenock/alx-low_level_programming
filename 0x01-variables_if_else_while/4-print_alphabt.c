#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
char lt = 'a';
while (lt <= 'z')
{
if (lt == 'e' || lt == 'q')
{
lt++;
continue;
}
putchar (lt);
lt++;
}
putchar ('\n');
return (0);
}
