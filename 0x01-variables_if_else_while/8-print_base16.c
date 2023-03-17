#include <stdio.h>
/**
 * main - Executor
 * Description: Print hex with putchar
 * Return: 0
 */

int main(void)
{
	int a;
	char b;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
