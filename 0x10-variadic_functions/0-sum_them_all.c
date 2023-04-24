#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Function to sum all the passed args
 * @n: The number
 * Return: 0 if n is zero || the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list args;

	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; (size_t)i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
