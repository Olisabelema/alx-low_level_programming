#include "lists.h"

/**
* free_listint2 - frees a linked list
* @head: pointer to the listint_t list to be freed
*/

void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
	{
		return;
	}

	for (listint_t *current_node = *head; current_node != NULL; )
	{
	listint_t *c = current_node;

	current_node = current_node->next;

	free(c);
	}

	*head = NULL;
}
