#include "lists.h"
#include <stdlib.h>

/**
* free_list - free a list_t list
* @head: input
* Return: void
*/

void free_list(list_t *head)
{
list_t *new_node;

	while (head)
	{
		new_node = head->next;
		free(head->str);
		free(head);
		head = new_node;
	}
}
