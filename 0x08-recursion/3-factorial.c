#include "main.h"
#include <stdio.h>

/**
 * factorial - Function that does a fuctorial of an int
 * @n: The integer
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}


