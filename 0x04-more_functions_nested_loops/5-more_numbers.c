#include "main.h"

/**
 * more_numbers - Printing numbers from 0 - 14 10*
 * Return: 0
 */

void more_numbers(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				putchar((b / 10) + 48);
			}
			putchar((b % 10) + 48);
		}
		putchar('\n');
	}

}
