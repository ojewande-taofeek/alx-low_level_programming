#include "dog.h"

/**
 * free_dog - The function that free dogs
 * @d: The pointer to to dog_t
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
