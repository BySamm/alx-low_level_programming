#include "main.h"
#include <stdlib.h>

/**
 * create_array - Fucntion to create a array of chars
 * @size: The size of memory
 * @c: The char to be printed
 * Return: NULL or pointe to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	p = malloc(sizeof(char) * size);
	if (size == 0 || p == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	p[i] = '\0';
	return (p);
}
