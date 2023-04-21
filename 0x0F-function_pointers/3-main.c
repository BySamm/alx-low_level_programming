#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function to print simple operations
 * @argc: The arguments passed
 * @argv: The array of pointers to args
 * Return: Zero
 */

int main(int __attribute__((__unused__))argc, char *argv[])
{
	int a, b;
	char *oper;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	oper = argv[2];
	b = atoi(argv[3]);
	if (get_op_func(oper) == NULL || oper[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*oper == '/' && b == 0) || (*oper == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(oper)(a, b));
	return (0);
}
