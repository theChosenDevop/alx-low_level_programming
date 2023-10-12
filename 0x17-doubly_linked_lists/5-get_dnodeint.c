#include "lists.h"

/**
 * get_dnodeint_at_index - nth node of a dlistint_t linked list.
 * @head: head of linked list
 * @index: index of the node, starting from 0
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head && i < index)
	{
		head = head->next;
		i++;
	}

	return (head);
}
