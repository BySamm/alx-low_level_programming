#include "main.h"

/**
 * print_last_digit - Implementation
 * @ld: Be the last digit
 * Return: ld
 */

int print_last_digit(int ld)
{
	int pld;

	pld = (ld % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}
	_putchar (pld + '0');
	return (pld);
}
