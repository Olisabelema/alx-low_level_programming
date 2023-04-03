#include "lists.h"

/**
 * print_listint - prints a linked list
 * @h: head pointer of list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	int i = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		i++;
		temp = temp->next;
	}

	return (i);
}
