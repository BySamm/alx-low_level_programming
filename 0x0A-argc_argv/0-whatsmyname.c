#include <stdio.h>

/**
 * main - Function to be executed
 * @argc: Counter
 * @argv: Container
 * Return: Nothing
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
