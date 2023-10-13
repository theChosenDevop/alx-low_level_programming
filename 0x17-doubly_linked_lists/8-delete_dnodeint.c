#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at
 * index of a dlistint_t linked list.
 * @head: array of linked list
 * @index: index of list
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *h2 = NULL;
	dlistint_t *h = NULL;

	if (*head == NULL)
		return (-1);
	h = *head;
	while (h->prev)
		h = h->prev;
	while (h)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = h->next;
				if (*head)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h->next;
				if (h->next != NULL)
					h->next->prev = h2;
			}
			free(h);
			return (1);
		}
		h2 = h;
		h = h->next;
		i++;
	}
	return (-1);
}
