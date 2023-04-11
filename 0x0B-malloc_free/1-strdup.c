#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function to return a pointer to a new space
 * @str: What to be printed
 * Return: NULL or pointer
 */

char *_strdup(char *str)
{
	int i = 0, j;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}
	p = malloc(i * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
	{
		p[j] = str[j];
	}
	return (p);
}

