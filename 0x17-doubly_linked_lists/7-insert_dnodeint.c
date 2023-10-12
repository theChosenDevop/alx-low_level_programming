#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: array of linked list
 * @idx: index
 * @n: element
 * Return:  the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *next;

	dlistint_t *head = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		dprintf(2, "Error Can't malloc\n");
		return (NULL);
	}
	while (i < (idx - 1) && head)
	{
		head = head->next;
		i++;
	}
	next = head->next;
	node->n = n;
	node->prev = head;
	head->next = node;
	node->next = next;
	next->prev = node;
	return (node);
}
