#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_string - Function to set a value of pointer to char
 * @s: The value
 * @to: Where to
 * Return: Something
 */

void set_string(char **s, char *to)
{
	strcpy(s, to);
	return (s);
}

