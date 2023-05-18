#include "lists.h"

/**
 * sum_dlistint -  function that returns the sum of all the data (n) of
 * a dlistint_t linked list.
 * @head: Head
 * Return: sum of data in distint_t linked list.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (head == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
