#include "lists.h"

/**
 * free_list - Function that frees a list_t list.
 * @head: List's head
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *existing;

	while ((existing = head) != NULL)
	{
		head = head->next;
		free(existing->str);
		free(existing);
	}
}
