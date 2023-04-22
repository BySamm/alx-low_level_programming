#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Digit checker
 * @c: What to be checked
 * Return: 0 or 1
 */

int _isdigit(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (c[i] < '0' || c[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * _strlen - String length checker
 * @s: The string to check
 * Return: The length
 */

int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 * error - Error handler
 */

void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - Function to multiply 2 ints
 * @argc: Args
 * @argv: Array for args
 * Return: Zero
 */

int main(int argc, char *argv[])
{
	char *s, *c;
	int i, a = 0;
	int l1, l2, len, d1, d2, ca, *res;

	s = argv[1];
	c = argv[2];
	if (argc != 3 || !_isdigit(s) || !_isdigit(c))
	{
		error();
	}
	l1 = _strlen(s);
	l2 = _strlen(c);
	len = l1 + l2 + 1;
	res = malloc(sizeof(int) * len);
	if (!res)
	{
		return (1);
	}
	for (i = 0; i <= l1 + l2; i++)
	{
		res[i] = 0;
	}
	for (l1 = l2 - 1; l1 >= 0; l1--)
	{
		d1 = s[l1] - '0';
		ca = 0;
		for (l2 = _strlen(c) - 1; l2 >= 0; l2--)
		{
			d2 = c[l2] - '0';
			ca += res[l1 + l2 + 1] + (d1 * d2);
			res[l1 + l2 + 1] = ca % 10;
			ca /= 10;
		}
		if (ca > 0)
		{
			res[l1 + l2 + 1] += ca;
		}
	}
	for (i = 0; i < len - 1; i++)
	{
		if (res[i])
		{
			a = 1;
		}
		if (a)
		{
			putchar(res[i] + '0');
		}
	}
	if (!a)
	{
		putchar('0');
	}
	putchar('\n');
	free(res);
	return (0);
}
