#include <stdio.h>

/**
 * main - Executor
 * Description: Alpabets in lowercase
 * Return: 0
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
