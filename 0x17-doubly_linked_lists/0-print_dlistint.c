#include "lists.h"

/**
 * print_dlistint - prints all the elements of dlistint_t list
 * @h: head of linked list
 * Return: elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
