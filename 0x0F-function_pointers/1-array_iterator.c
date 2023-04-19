#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - Function to execute another function & array
 * @array: The array
 * @size: Its size
 * @action: The function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	for (i = 0; (size_t)i < size; i++)
	{
		action(array[i]);
	}
}
