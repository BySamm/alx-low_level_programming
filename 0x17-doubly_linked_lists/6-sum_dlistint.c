#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a doubly linked list
 *
 * @h: head of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *h)
{
	int sum;

	sum = 0;
	if (h != NULL)
	{
		while (h->prev != NULL)
		{
			h = h->prev;
		}
		while (h != NULL)
		{
			sum += h->n;
			head = h->next;
		}
	}

	return (sum);
}
