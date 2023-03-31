#include "main.h"

/**
 * *leet - Function to encrypt into 1337
 * @str: The string
 * Return: The string
 */

char *leet(char *str)
{
	int i, j;
	char move[] = "aAeEoOtTlL";
	char with[] = "44330011";

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == move[j])
			{
				str[i] = with[j];				
			}
			
		}
		i++;
		
	}
	putchar('\n');
	return (str);
}
