#include "main.h"
#include <string.h>

/**
 * _memset - Function to set memory
 * @s: Memory to receive
 * @b: Value to be move
 * @n: Byte number
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}


