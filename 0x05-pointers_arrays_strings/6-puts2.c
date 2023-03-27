#include "main.h"
#include <string.h>

/**
 * puts2 - Function to print every other char
 * @str: The input
 * Return: 0
 */

void puts2(char *str)
{
	int i;
	int len;

	len = strlen(str);

	for (i = 0; i < len / 2; i++)
	{
		putchar(*str);
		str += 2;
	}
	putchar('\n');
}
