#include "main.h"
#include <string.h>

/**
 * _strstr - Function to locate a substring
 * @haystack: The pointer to the string to locate from
 * @needle: The string to locate
 * Return: The located string
 */

char *_strstr(char *haystack, char *needle)
{
	char *t = strstr(haystack, needle);

	return (t);
}

