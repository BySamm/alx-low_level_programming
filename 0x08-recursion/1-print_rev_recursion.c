#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - Function to reverse a string
 * @s: The string
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
