#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Owner
 * Return: A new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *newDog;

	for (i = 0; name[i] != '\0'; i++)
		continue;
	i++;
	for (j = 0; owner[j] != '\0'; j++)
		continue;
	j++;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	
	newDog->name = malloc(i * sizeof(char));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		newDog->name[k] = name[k];
	newDog->name[k] = name[k];
	newDog->age = age;
	newDog->owner = malloc(sizeof(owner) * j);
	if (newDog->owner == NULL)
	{
		free(newDog->owner);
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (k = 0; k < j; k++)
		newDog->owner[k] = owner[k];
	newDog->owner[k] = owner[k];
	return (newDog);
}
