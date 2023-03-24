#include "main.h"

/**
 * print_square - Function to print square by provided number
 * @size: Input
 * Return: 0
 */

void print_square(int size)
{
	int a = size;
	int b;

	if (a > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
