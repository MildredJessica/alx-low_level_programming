#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a struct dog
 * @name: Dog's name
 * @age: Age
 * @owner: owner's details
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
