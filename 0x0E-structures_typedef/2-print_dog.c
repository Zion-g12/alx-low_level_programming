#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - a function prints a struct dog
 * @d: is a pointer to  struct dog
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
else
d->name = "(nil)";
d->owner = "(nil)";
}
