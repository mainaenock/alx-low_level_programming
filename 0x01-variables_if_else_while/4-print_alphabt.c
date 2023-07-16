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
if (lt == 'e' && 'q')
continue;
putchar (lt);
lt++;
}
putchar ('\n');
return (0);
}
