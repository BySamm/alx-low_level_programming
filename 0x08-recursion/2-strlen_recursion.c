#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - Function to print length of a string
 * @s: The string
 * Return: The string
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
