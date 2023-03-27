#include "main.h"
#include <string.h>
/**
 * _strlen - Function to print strinh length
 * @s: An input
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	for (i = *s; i < '\0'; i++)
	{
		i++;
		s++;
	}
	return (i);
}
