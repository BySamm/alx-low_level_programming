#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Function to initialize the structure
 * @d: Strucure's
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		exit(1);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
