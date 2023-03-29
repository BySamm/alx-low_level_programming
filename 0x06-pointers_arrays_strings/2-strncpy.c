#include "main.h"
#include <string.h>

/**
 * *_strncpy - Function to copy from source to destination
 * @dest: Destination
 * @src: Source
 * @n: Number of chars to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
