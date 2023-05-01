#include "lists.h"

/**
 * pop_listint - Function to delete the head node of a linked list
 * @head: List's head pointer
 * Return: Elements deleted || 0 when list is empty
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (!head || !*head)
	{
		return (0);
	}
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}


