#include "lists.h"

/**
 * print_listint - Function to all element of list
 * @h: The pointer to the head
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}


