#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the node at the given index.
 * @head: Pointer to the head node of the list.
 * @index: Index of the desired node.
 *
 * Return: The node at the given index, or NULL if not found.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	if (index <= 0 || head == NULL)
		return (head);

	for (i = 1; i <= index; i++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}
	return (current);
}
