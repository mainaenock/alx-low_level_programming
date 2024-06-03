#include <stdio.h>

void __attribute__((constructor)) before(void);
/**
 * before - print a message before the main function is execute.
 *
 * Return: nothing.
 */

void before(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
