#include "main.h"

/**
 * *_strcpy - Fucntion to copy from src to dest
 * @dest: destination
 * @src: source
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
