#include "dog.h"

/**
 * _strlen - The function returns the length of a string
 * @c: The pointer to a string constant
 * Return: The length of the string
 */

int _strlen(char *c)
{
	int len;

	for (len = 0; c[len]; len++)
		;
	return (len);
}

/**
 * _strcpy - The function copies a src string constant to destinationation str
 * @dest: The pointer to the destination string constant
 * @src: The pointer to the source string constant
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int idx = 0;

	while (src[idx])
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}

/**
 * new_dog - The function creates a new dog
 * @name: The pointer to the name argument
 * @age: The dog's age formal parameter
 * @owner: The pointer to the owner argument
 * Return: The new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int name_len, owner_len;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (NULL);
	}
	name_len = _strlen(name);
	new->name = malloc(sizeof(char) * (name_len + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	owner_len = _strlen(owner);
	new->owner = malloc(sizeof(char) * (owner_len + 1));
	if (new->owner == NULL)
	{
		free(new);
		free(new->name);
		return (NULL);
	}
	_strcpy(new->name, name);
	_strcpy(new->owner, owner);
	new->age = age;

	return (new);
}
