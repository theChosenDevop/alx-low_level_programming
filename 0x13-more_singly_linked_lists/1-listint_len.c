#include "lists.h"

/**
 * listint_len - print number of elements in a linked listint_t list
 * @h: input
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
