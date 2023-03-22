#include "main.h"
/**
 * times_table - Implementor
 * Description: Prorgam to create a multiple table 9
 * Return: 0;
 */

void times_table(void)
{
	int col, row, d;

	for (row = 0; row <= 9; row++)
		{
			_putchar(48);
			_putchar(',');
			_putchar(' ');
			for (col = 1; col <= 9; col++)
			{
				d = (row * col);
				if ((d / 10) > 0)
				{
					_putchar((d / 10) + 48);
				}
				else
				{
					_putchar(' ');
				}
				_putchar((d % 10) + 48);
				if (col < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
}
