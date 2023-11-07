#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prototype
 * @d: pointer to my_dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{

	if (d != NULL)
	{
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
	}
	else if ((*d).name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else if ((*d).age == 0)
	{
		printf("Age: (nil)\n");
	}
	else if ((*d).owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
}
