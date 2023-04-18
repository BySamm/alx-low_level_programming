#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Function to free memory allocated to struct dog
 * @d: The structure's
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
