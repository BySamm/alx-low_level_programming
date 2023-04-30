#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at the beginning of list
 * @head: List's head pointer
 * @n: New element container
 * Return: New element || NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *the_n;

	the_n = malloc(sizeof(listint_t));
	if (the_n == NULL)
	{
		return (NULL);
	}
	the_n->n = n;
	the_n->next = *head;
	*head = the_n;
	return (the_n);
}
