#include "dog.h"

/**
 * init_dog - The function initializes a variable of type struct dog
 * @d: The pointer to the struct dog variable
 * @name: The pointer to the argument of element name
 * @age: The argument of element age
 * @owner: The pointer to the argument of element owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
