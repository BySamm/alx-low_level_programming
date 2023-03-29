#include "main.h"
#include <string.h>

/**
 * *_strncat - Function to concatenate two string using strncat
 * @dest: Destination
 * @src: Source
 * @n: Number on which concatenation will begin
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
