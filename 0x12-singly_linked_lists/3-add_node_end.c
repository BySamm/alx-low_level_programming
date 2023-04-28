#include "lists.h"

/**
 * add_node_end - Func to add node at the end of list
 * @head: List's head
 * @str: String to be added
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *exist;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	for (n = 0; str[n]; n++)
	{
		;
	}
	new->len = n;
	new->next = NULL;
	exist = *head;

	if (exist == NULL)
	{
		*head = new;
	}
	else
	{
		while (exist->next != NULL)
		{
			exist = exist->next;
		}
		exist->next = new;
	}
	return (*head);
}
