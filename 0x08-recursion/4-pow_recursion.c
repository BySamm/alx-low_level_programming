#include "main.h"

/**
 * _pow_recursion - Function to calculate power of two ints
 * @x: An int
 * @y: Another int
 * Return: The power
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
