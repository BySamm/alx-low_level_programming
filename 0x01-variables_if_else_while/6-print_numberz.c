#include <stdio.h>

/**
 * main - Executor
 * Description: Printing int using putchar
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
