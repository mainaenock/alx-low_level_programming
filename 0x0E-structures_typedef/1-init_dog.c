#include <stdio.h>
#include "dog.h"

/**
 * init_dog - prototype
 * @d: pointer of type struct dog
 * @name: dog name
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}

}
