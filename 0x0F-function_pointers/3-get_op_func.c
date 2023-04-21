#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - Function to pointer to call others
 * @s: The choice
 * Return: Nothing
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
}
