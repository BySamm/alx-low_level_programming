#include "main.h"

/**
 * swap_int - Function to swap pointers values
 * @a: An input
 * @b: An input
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
