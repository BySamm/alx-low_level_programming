#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Function to print a chessboard
 * @a: container
 * Return: The board
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
			if (j == 7)
			{
				putchar('\n');
			}
		}
	}
}
