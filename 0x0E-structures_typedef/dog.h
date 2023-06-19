#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - The structure defines the name, age and owner of a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The dog's owner's name
 * Description: The structure data type cmbines multiple data types
 *              under one data type defined by the user
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - The new name of the struct dog data type
 * Desciption: This is used to illustrate the application of typedef
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
