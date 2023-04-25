#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Function to print all args passed
 * @format: The type of the passed in
 * Return: The passed in
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *separator = "";
	va_list all;

	va_start(all, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(all, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(all, double));
					break;
				case 's':
					s = va_arg(all, char *);
					if (!s)
					{
						s = "(nil)";
					}
					printf("%s%s", separator, s);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(all);
}
