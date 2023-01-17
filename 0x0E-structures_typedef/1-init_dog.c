#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initialises the dog struct
 * @d: Dog struct
 * @name: Dog name
 * @age: Dog age
 * @owner: Owner's details
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
