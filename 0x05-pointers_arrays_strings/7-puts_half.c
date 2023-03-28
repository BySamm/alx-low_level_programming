#include "main.h"

/**
 * puts_half - Function to print half of string
 * @str: The input
 * Return: 0
 */

void puts_half(char *str)
{
	int i, j, k;

	for (i = 0; str[i] != '\0'; i++)
	{
		k++;
	}
	j = (k / 2);
	if ((k % 2) == 1)
	{
		j = ((k + 1) / 2);
	}
	for (i = j;  str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
