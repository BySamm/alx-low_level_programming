#include "main.h"

/**
 * reverse_array - Function to reverse value of an array
 * @a: Array pointer
 * @n: Number of element in array
 * Return: values of array
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	a = &a[n -1];
	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			putchar(44);
			putchar(' ');
		}
		b = *a--;
		/*putchar(b);*/
		printf("%d", b);
	}
	putchar('\n');
}
