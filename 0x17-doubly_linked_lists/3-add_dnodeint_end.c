#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: Pointer to the head node of the list.
 * @n: Value to be added at the end.
 *
 * Return: Address of the new node, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;

		return (new_node);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	new_node->prev = current;
	new_node->next = NULL;

	return (new_node);
}
