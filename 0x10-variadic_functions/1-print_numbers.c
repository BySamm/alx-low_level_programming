#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Function to print numbers passed as args
 * @separator: The numbers separator
 * @n: The numbers passed
 * Return: The numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num, i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; (size_t)i < n; i++)
	{
		num = va_arg(ptr, int);
		printf("%d", num);
		if ((size_t)i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
