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
	int n = strlen(s);
	int i = 0;

	for (i = n; i >= 0; i--)
	{
		putchar(s[i]);
	}
}
