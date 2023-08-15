#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - prototype
 * @d: all details about dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

