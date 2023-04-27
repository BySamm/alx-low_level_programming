#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - Function to print num of elements in list
 * @h: Pointer to list
 * Return: The number of els
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
