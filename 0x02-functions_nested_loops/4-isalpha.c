#include "main.h"

/**
 * _isalpha - Implementation
 * @c: Input character
 * Return: 1 if c is a char and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
