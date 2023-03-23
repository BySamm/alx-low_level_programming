#include "main.h"

/**
 * print_most_numbers - Function to print numbers 0 - 9 except 2 & 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int a = 48;

	while (a < 58)
	{
		if (a == 50 || a == 52)
		{
			a++;
			continue;
		}
		else
		{
			putchar(a);
			a++;
		}
	}
	putchar('\n');
}
