#include "lists.h"

/**
 * print_dlistint - Prints the elements of a doubly linked list.
 * @h: head node
 *
 * Return: The number of nodes (count) in the doubly linked list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;
	const dlistint_t *tmp = h;

	while (tmp != NULL)
	{
		node_count++;
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}

	return (node_count);
}
