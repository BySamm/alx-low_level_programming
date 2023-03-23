#include "main.h"

/**
 * print_numbers - Function to print numbers from 0 - 9
 * Return: 0
 */

void print_numbers(void)
{
	int a;

	a = 48;
	while (a < 58)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
