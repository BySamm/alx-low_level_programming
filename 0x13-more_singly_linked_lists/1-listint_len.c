#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in a linked
 * @h: The list head pointer
 * Return: Element
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

