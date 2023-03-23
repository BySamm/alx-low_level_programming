#include "main.h"

/**
 * print_line - Function to print lines
 * @n: An input
 * Return: 0
 */

void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		if (a <= 0)
		{
			continue;
		}
		else
		{
			putchar(95);
		}
	}
	putchar('\n');
}
