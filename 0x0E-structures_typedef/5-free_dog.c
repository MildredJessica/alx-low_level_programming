#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free Dog
 * @d: Pointer
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
