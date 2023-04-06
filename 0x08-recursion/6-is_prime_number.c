#include "main.h"

/**
 * find_prime - Funtion to check is_prime or not
 * @n: The P number
 * @a: The guess number
 * Return: Results
 */

int find_prime(int n, int a)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % a == 0 && a > 1)
	{
		return (0);
	}
	if ((n / a) < a)
	{
		return (1);
	}
	else
	{
		return (find_prime(n, a + 1));
	}
}
/**
 * is_prime_number - Function to find prime numbers
 * @n: The number to check
 * Return: The result
 */

int is_prime_number(int n)
{
	return (find_prime(n, 1));
}

