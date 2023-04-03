#include "main.h"
#include <string.h>

/**
 * _strpbrk - Fucntion to search a string
 * @s: The pointer to the char
 * @accept: The matching char
 * Return: Pointer to the matching char
 */

char *_strpbrk(char *s, char *accept)
{
	char *t = strpbrk(s, accept);
	return (t);
}
