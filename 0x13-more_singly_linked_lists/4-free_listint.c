#include "lists.h"

/**
 * free_listint - Function to free the list
 * @head: List's head
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
