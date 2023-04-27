#include "lists.h"
#include <stdio.h>


/**
 * print_list - Function to print all elements of list_t
 * @h: Pointer to list
 * Return: List
 */

size_t print_list(const list_t *h)
{
	size_t ss = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (ss);
}
