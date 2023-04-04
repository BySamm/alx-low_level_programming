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
	int L = 0;
	int R = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		L += a[i * size + i];
		R += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", L, R);
}
