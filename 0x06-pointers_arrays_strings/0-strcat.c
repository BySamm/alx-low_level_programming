#include "main.h"
#include <string.h>
/**
 * *_strcat - Function to concatinate two string
 * @dest: Destination
 * @src: Source
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
