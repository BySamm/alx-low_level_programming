#include "lists.h"

/**
 * sum_listint - Function to return the sum of all the data (n) of list
 * @head: List' head
 * Return: The sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

