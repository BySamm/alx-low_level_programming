#include "main.h"

/**
 * print_sign - Implementation
 * @n: Input to check
 * Return: 1 if +, 0 if zero and -1 if - zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
