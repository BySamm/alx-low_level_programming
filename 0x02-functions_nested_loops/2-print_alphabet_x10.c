#include "main.h"

/**
 * print_alphabet_x10 - Implementation of printing
 * Description: The program prints alphabets x10
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char a;
	int b = 0;

	for (a = 1; b <= 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
