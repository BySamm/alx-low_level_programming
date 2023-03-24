#include "main.h"

/**
 * print_diagonal - Function to print diagonal
 * @n: Input
 * Return: 0
 */

void print_diagonal(int n)
{
	int a = n;
	int b;

	if (a > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= a; b++)
			{
				if (a == b)
				{
					putchar(92);
				}
				else
				{
					putchar(' ');
				}
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
