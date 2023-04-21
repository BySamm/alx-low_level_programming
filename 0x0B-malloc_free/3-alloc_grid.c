#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function to return pointer to a 2d array
 * @width: The width
 * @height: The height
 * Return: NULL or pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **mem;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	mem = malloc(height * sizeof(int *));
	if (mem == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		mem = malloc(width * sizeof(int *));
		if (mem == NULL)
		{
			for (i = height; i >= 0; i--)
			{
				free(mem[i]);
			}
			free(mem);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			mem[i][j] = 0;
		}
	}
	return (mem);
}
