#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Function to concatenate two string
 * @s1: String one
 * @s2: String two
 * @n: Size
 * Return: NULL or Pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1len;
	size_t s2len;
	char *concatd;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1len = strlen(s1);
	s2len = strlen(s2);

	if (n >= s2len)
	{
		n = s2len;
	}
	concatd = malloc(s1len + n + 1);

	if (concatd == NULL)
	{
		return (NULL);
	}
	memcpy(concatd, s1, s1len);
	memcpy(concatd + s1len, s2, n);
	concatd[s1len + n] = '\0';
	return (concatd);
}

