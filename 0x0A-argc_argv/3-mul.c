#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function to multiply two ints
 * @argc: Counter
 * @argv: Container
 * Return: Nothing
 */

int main(int argc, char **argv)
{
	int i, a, b, n = 0;

	if (argc < 3)
	{
		printf("%s\n", "Error");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			a = atoi(argv[1]);
		       	b = atoi(argv[2]);
			n = a * b;
		}
		printf("%d\n", n);
	}
	return (0);
}
