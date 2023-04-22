#include "main.h"
#include <stdlib.h>

/**
 * _memset - To set the first byte with the value
 * @s: Memory to be set to
 * @b: Char to be set
 * @n: Num of times to set the char
 * Return: The pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; (size_t)i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}


/**
 * _calloc - Fucntion to allocate mem for an array
 * @nmemb: Arraym
 * @size: Size
 * Return: NULL or Pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *parr;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
	parr = malloc(size * nmemb);
	if (parr == NULL)
	{
		return (NULL);
	}
	_memset(parr, 0, nmemb * size);

	return (parr);
}
