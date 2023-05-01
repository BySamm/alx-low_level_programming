#include "lists.h"

/**
 * reverse_listint - Function to reverses a listint_t
 * @head: List's head
 * Return: Pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last = NULL;
	listint_t *new = NULL;

	while (*head)
	{
		new = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = new;
	}
	*head = last;
	return (*head);
}


