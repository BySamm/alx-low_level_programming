#include <stdio.h>
/**
 * main - Executor
 * Description: Reverse alphabets
 * Return: 0
 */

int main(void)
{
	char a = 'a';

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
