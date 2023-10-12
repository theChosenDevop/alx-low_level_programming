#include "lists.h"

/**
 * dlistint_len - output length of linked list
 * @h: head of list
 * Return: length o fnodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h->prev)
		h = h->prev;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
