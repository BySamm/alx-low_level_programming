#include "main.h"

/**
 * sub_sqrt_recursion - A sub function to find the root
 * @a: The guess number
 * @sqrt: The square root
 * Return: Results
 */

int sub_sqrt_recursion(int a, int sqrt)
{
	/*sqrt = a * a;*/
	if (a * a == sqrt)
	{
		return (a);
	}
	if (a == sqrt)
	{
		return (-1);
	}
	else
	{
		return (1 * sub_sqrt_recursion(a + 1, sqrt));
	}
}

/**
 * _sqrt_recursion - Function to find a natural squareroot
 * @n: The number
 * Return: The result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sub_sqrt_recursion(1, n));
	}
}

