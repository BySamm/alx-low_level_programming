#include "main.h"

/**
 * reverse_array - Function to reverse arrays values
 * @n: Number of elements in array
 * @a: Container
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int *first = a;
	int *last = a + n - 1;
	int temp;

	while (first < last)
	{
		temp = *first;
		*first++ = *last;
		*last-- = temp;
	}
}
