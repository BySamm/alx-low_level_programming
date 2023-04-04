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
	int L, R;

	for (i = 0; i < size; i++)
	{
		for (j = (size - 1); j >= 0; j--)
		{
			L += *(a + i * size + i);
			R += *(a + j * size + j);
			printf("%d, %d", L, R);
		}
	}
}
