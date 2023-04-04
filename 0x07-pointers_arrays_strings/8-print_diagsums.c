#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - Function to print sum of diagonals square matrix
 * @a: The container
 * @size: The size
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int l = 0;
	int r = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				l += a[j];
				putchar(l);
			}
			if ((i + j) == size - 1)
			{
				r += a[i];
				putchar(r);
			}
		}
	}
}
