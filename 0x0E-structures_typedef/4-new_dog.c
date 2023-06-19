#include "dog.h"

/**
 * new_dog - The function creates a new dog
 * @name: The name of the dog
 * @age: The dog's age
 * @owner: The owner of the dog name
 * Return: The pointer new, if successful
 *         NULL, if otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
