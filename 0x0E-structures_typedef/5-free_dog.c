#include "dog.h"

/**
 * free_dog - The function frees dogs
 * @d: The pointer to the dog_t (data type)
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
