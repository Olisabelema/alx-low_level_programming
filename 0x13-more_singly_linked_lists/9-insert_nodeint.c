#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node in a linked list,
* at a given position
* @head: pointer to the first node in the list
* @x: index where the new node is added
* @n: data to insert in the new node
*
* Return: pointer to the new node, or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int x, int n)
{
	if (!head)
	return (NULL);

	listint_t *new_node;
	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (x == 0)
	{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}

	listint_t *current_node;
	current_node = *head;
	unsigned int i;

	for (i = 0; current_node != NULL && i < x - 1; i++)
	{
	current_node = current_node->next;
	}

	if (current_node == NULL)
	{
	free(new_node);
	return (NULL);
	}

	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
