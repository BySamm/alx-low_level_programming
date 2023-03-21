#include "main.h"

/**
 * print_alphabet - Implementation
 * Description: Program to print alphabets lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
