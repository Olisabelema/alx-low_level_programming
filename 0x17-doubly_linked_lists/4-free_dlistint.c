#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: Head
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
