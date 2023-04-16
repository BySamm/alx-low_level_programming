#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function to concatenate two string an allocate memory
 * @s1: String one
 * @s2: String two
 * Return: NULL or pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, x = 0, y = 0;
	char *both;

	while (s1[x] != '\0')
	{
		x++;
	}
	while (s2[y] != '\0')
	{
		y++;
	}
	both = malloc((x + y) * sizeof(char) + 1);
	if (both == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		return (s2);
	}
	if (s2 == NULL)
	{
		return (s1);
	}
	if (s1 && s2 == NULL)
	{
		return (" ");
	}
	for (i = 0; i < x; i++)
	{
		both[i] = s1[i];
	}
	for (j = 0; j < y; j++)
	{
		both[i + j] = s2[j];
	}
	both[i + j] = '\0';
	return (both);
	free(both);
}
