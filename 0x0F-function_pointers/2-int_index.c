#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - Function to search for integer
 * @size: Size of array
 * @array: The array
 * @cmp: The ponter to function
 * Return: Integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
