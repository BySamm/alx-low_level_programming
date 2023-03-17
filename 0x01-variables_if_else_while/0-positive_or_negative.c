#include <stdio.h>
#include <time.h>

/**
 * main - Executor
 * Desctiption: To print if number is + or -
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Chech if the scanned number */
	if (n > 0)
	{
		printf(n + "is positive\n");
	}
	if (n == 0)
	{
		printf(n + "is zero\n");
	}
	else
	{
		printf(n + "is negative\n");
	}
	return (0);
}
