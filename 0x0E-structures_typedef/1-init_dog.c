#include "dog.h"

/**
 * init_dog - The function initialize a variable of type struct dog
 * @d: The variable name of the type struct dog
 * @name: The element "name" of the structure
 * @age: The element "age" of the structure
 * @owner: The element "owner" of the structure
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
