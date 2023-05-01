#include "lists.h"

/**
 * delete_nodeint_at_index - Function to delete the node at index of a list
 * @head: List's head
 * @index: Index of node to be deleted
 * Return: 1 || -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *last = NULL;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!temp || !(temp->next))
		{
			return (-1);
		}
		temp = temp->next;
		i++;
	}
	last = temp->next;
	temp->next = last->next;
	free(last);
	return (1);
}
