#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Function to check malloc
 * @b: Size
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b + 1);
	if (s == NULL)
	{
		putchar('9');
		putchar('8');
		putchar('\n');
	}
	return (0);
}
