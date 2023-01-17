#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints a dog struct
 * @d: Dog struct
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: ");
		printf("%f\n", d->age);
		printf("Owner: ");
		d->owner != NULL ? printf("%s\n", d->owner): printf("(nil)\n");
	}
}
