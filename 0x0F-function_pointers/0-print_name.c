#include "function_pointers.h"

/**
 * print_name - prototype
 * @name: string of name
 * @f: function pointer
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
