#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees dogs.
 * @d: address of variable with dog_t data type
 * Return: void
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
