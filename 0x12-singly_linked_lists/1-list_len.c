#include "lists.h"
#include <stdio.h>

/**
* list_len - number of elements in a linked list_t list.
* @h: input
* Return: number of elements
*/

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
