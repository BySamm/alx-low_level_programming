#include "main.h"
#include <string.h>

/**
 * *string_toupper - Function to change lower to upper case string
 * @'': The pointer
 * Return: 0
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
