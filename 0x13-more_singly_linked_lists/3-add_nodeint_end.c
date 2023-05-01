#include "lists.h"

/**
 * add_nodeint_end - Function to add new node at end
 * @head: List's head
 * @n: New node's container
 * Return: NULL || element of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *the_n, *l;

	the_n = malloc(sizeof(listint_t));
	if (the_n == NULL)
	{
		return (NULL);
	}
	the_n->n = n;
	the_n->next = NULL;
	if (*head == NULL)
	{
		*head = the_n;
	}
	else
	{
		l = *head;
		while (l->next != NULL)
		{
			l = l->next;
		}
		l->next = the_n;
	}
	return (*head);
}
