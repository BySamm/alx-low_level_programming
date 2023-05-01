#include "lists.h"

/**
 * get_nodeint_at_index - Function to return nth node of list
 * @head: List's head
 * @index: Index node to return
 * Return: Pointer to the node || NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}

