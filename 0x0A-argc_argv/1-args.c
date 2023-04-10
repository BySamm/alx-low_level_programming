#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Function to execute all
 * @argc: Counter
 * @argv: Container
 * Return: Nothing
 */

int main(int argc, char **argv)
{
	int i, n = 0;

	(void)argv;
	for (i = 1; i < argc; i++)
	{
		n = i;
	}
	printf("%d\n", n);
	return (0);
}
