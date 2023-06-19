#include "dog.h"

/**
 * print_dog - The function prints a struct dog
 * @d: The variable of type struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	/*if (d->age == NULL)
		printf("Age: (nil)\n");
	else
		*/
		printf("Age: %.1f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
