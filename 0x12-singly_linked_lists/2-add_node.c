#include "lists.h"

/**
 * add_node - Func to add a new node at the beginning of a list_t
 * @head: The list's head
 * @str: The string to be added
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *t;
	int l = 0;

	t = malloc(sizeof(list_t));
	if (t == NULL)
	{
		return (NULL);
	}
	while (str[l])
	{
		l++;
	}
	t->len = l;
	t->str = strdup(str);
	t->next = *head;
	*head = t;
	return (t);
}
