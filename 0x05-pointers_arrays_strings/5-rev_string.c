#include "main.h"
#include <string.h>

/**
 * rev_string - Function to reverse a string
 * @s: The input
 * Return: 0
 */

void rev_string(char *s)
{
	int i, len, c;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		c = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = c;
	}
}
