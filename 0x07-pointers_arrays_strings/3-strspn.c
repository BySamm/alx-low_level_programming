#include "main.h"
#include <string.h>

/**
 * _strspn - Function to get prefix length
 * @s: A string to be scanned
 * @accept: A string containing the char to match
 * Return: Number of chars in s
 */

unsigned int _strspn(char *s, char *accept)
{
	char n = strspn(s, accept);

	return (n);
}

