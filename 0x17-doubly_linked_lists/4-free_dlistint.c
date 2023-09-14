#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @h: pointer to head of the list
 * Return: nothing
 **/
void free_dlistint(dlistint_t *h)
{
	if (h == NULL)
	{
		return;
	}
	while (h->next)
	{
		h = h->next;
		free(h->prev);
	}
	free(h);
}
