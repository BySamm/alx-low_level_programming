#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - Structure defined
 * @name: Name of the puppy
 * @age: Age of the puppy
 * @owner: Owner of the puppy
 * Description: The structure will be use to display the above info
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/* dog_t - New type as a new name of struct dog */

typedef struct dog dog_t;

#endif
