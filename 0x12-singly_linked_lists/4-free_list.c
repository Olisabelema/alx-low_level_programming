#include "lists.h"
#include <stdio.h>

/**
 * free_list - frees a linked list
 * @head: pointer to first element of list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp = head;
	list_t *temp2 = NULL;

	while (temp != NULL)
	{
		temp2 = temp;
		temp = temp->next;
		free(temp2->str);
		free(temp2);
	}
}
