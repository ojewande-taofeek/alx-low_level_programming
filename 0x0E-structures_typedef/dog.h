#ifndef DOG_H
#define DOG_H

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

#endif /* DOG_H */
