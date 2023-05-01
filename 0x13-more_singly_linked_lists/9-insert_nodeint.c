#include "lists.h"

/**
 * insert_nodeint_at_index - Function to insert a new node at a given position
 * @head: List's head
 * @idx: New node index
 * @n: New node index
 * Return: pointer to new node || NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *the_n;
	listint_t *temp = *head;

	the_n = malloc(sizeof(listint_t));
	if (!the_n || !head)
	{
		return (NULL);
	}
	the_n->n = n;
	the_n->next = NULL;
	if (idx == 0)
	{
		the_n->next = *head;
		*head = the_n;
		return (the_n);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			the_n->next = temp->next;
			temp->next = the_n;
			return (the_n);
		}
		else
		{
			temp = temp->next;
		}
	}
	return (NULL);
}

