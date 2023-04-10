#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Function to add positive numbers
 * @argc: Counter
 * @argv: COntainer
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int i, j, n = 0;

	if (argc < 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (isalpha(argv[i][j]))
				{
					printf("%s\n", "Error");
					return (0);
				}
			}
			n += atoi(argv[i]);
		}
		printf("%d\n", n);
	}
	return (0);
}
