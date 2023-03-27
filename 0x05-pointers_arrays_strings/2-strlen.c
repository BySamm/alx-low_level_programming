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

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
