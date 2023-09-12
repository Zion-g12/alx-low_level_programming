#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: a pointer to a char that store dog's name
 * @age: a number that stores dog's age
 * @owner: a pointer to char that stores dog's owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

