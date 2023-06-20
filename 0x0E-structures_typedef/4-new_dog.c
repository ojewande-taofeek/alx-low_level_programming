#include "dog.h"
#include <string.h>

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
	new->name = malloc(sizeof(char) * strlen(name));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	else
		new->name = strcpy(new->name, name);
	new->owner = malloc(sizeof(char) * strlen(owner));
	if (new->owner == NULL)
	{
		free(new);
		free(name);
		return (NULL);
	}
	else
		new->owner = strcpy(new->owner, owner);
	new->age = age;
	return (new);
}
