#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * *cap_string - Function to capitilize all words
 * @str: The container
 * Return: the string capitalized
 */

char *cap_string(char *str)
{
	int i;
	int len = 0;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (i == 0)
		{
			str[i] = toupper(str[i]);
		}
		else if (str[i] == ' ' || str[i] == ',' || str[i] == ';'
				|| str[i] == '.' || str[i] == '!' || str[i] == '?'
				|| str[i] == '(' || str[i] == ')'
				|| str[i] == '{' || str[i] == '}' || str[i] == '\n' || str[i] == '\t')
		{
			str[i + 1] = toupper(str[i + 1]);
		}
	}
	return (str);
}
