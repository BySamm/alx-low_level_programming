#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Function to create an array of int
 * @min: Minimum
 * @max: Maximum
 * Return: NULL or Pointer
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
