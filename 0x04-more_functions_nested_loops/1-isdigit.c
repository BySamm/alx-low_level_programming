#include "main.h"
#include <ctype.h>
/**
 * _isdigit - Checks if the input is digit
 * @c: Is the input
 * Return: 0
 */

int _isdigit(int c)
{
	if (isdigit(c) != 0)
	{
		return (1);
	}
	return (0);
}
