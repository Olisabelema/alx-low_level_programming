#include "lists.h"

/**
* free_listint - frees a linked list
* @head: listint_t list to be freed
*/
void free_listint(listint_t *head)
{
	listint_t *current_node;

	for (; head != NULL; head = current_node)
	{
	current_node = head->next;
	free(head);
	}
}
