#include "main.h"
/**
 * _isupper - Function to check is char is uppercase
 * @c: The input
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
