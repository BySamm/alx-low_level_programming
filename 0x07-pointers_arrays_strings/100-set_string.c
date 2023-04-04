#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * set_string - Function to set a value of pointer to char
 * @s: The value
 * @to: Where to
 * Return: Nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}

