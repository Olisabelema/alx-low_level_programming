#include "lists.h"

/**
 * print_listint - prints a linked list
 * @h: head pointer of list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *c = h;
	int i = 0;

	while (c != NULL)
	{
		printf("%d\n", c->n);
		i++;
		c = c->next;
	}

	return (i);
}
