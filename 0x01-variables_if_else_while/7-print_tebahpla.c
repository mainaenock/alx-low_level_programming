#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
char lt = 'z';
while (lt >= 'a')
{
putchar (lt);
lt--;
}
putchar ('\n');
return (0);
}
