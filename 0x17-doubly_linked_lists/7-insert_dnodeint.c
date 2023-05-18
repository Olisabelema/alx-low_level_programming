#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at the
 * specified index.
 * @h: Pointer to the head node of the list.
 * @idx: Index at which the new node should be inserted.
 * @n: Value to be added in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int i = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	for (i = 1; i < idx; i++)
	{
		current = current->next;

		if (current == NULL)
			return (NULL);
	}
	new_node->next = current->next;
	new_node->prev = current;
	current->next = new_node;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
