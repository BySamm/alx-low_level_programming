#include <stdio.h>

/**
 * main - Executor
 * Description: Alpabets in lowercase
 * Return: 0
 */

int main(void)
{
        char a = 'a';
	char b = 'A';

        for (b = 'A'; b <= 'Z'; b++)
	{
		for(a = 'a'; a <= 'a'; a++)
		{
			putchar(a);
		}
		putchar(b);
	}
        putchar('\n');
        return (0);
}

