#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - Function to copy a memory
 * @dest: Destination where to copy
 * @src: Source where to get a copy
 * @n: Number of byte to copy
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (0);
}

