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
	dlistint_t *node, *next, *head;

	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	head = *h;

	if  (idx == 0)
		return (add_dnodeint(h, n));

	while (i < (idx - 1) && head)
	{
		head = head->next;
		i++;
	}
	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		dprintf(2, "Error Can't malloc\n");
		return (NULL);
	}

	next = head->next;
	node->n = n;
	node->prev = head;
	head->next = node;
	node->next = next;

	if (next != NULL)
	next->prev = node;

	return (node);
}
