#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that frees memory allocated for a struct dog
 * @d: a pointer struct dog to free
 */
void free_dog(dog_t *d)
{
if (d == NULL)
{
return ();
}
else
{
free(d->name);
free(d->owner);
free(d);
}
}
