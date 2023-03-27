#include "main.h"
#include <string.h>

/**
 * print_rev - Function to print in reverse
 * @s: The input
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (j = i; j > 0; j--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
