#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - Function to locate a character in string
 * @s: The pointer
 * @c: The string to be located
 * Return: c
 */

char *_strchr(char *s, char c)
{		
	char *f  = strchr(s, c);

	return (f);
}
