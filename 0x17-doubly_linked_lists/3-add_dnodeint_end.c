#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
 * @head: array of linked list
 * @n: element of linked list
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h = NULL;
	dlistint_t *newNode = NULL;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		dprintf(2, "Error Can't Malloc\n");
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	h = *head;
	if (h)
	{
		while (h->next)
		{
			h = h->next;
		}
		h->next = newNode;
	}
	else
	{
		*head = newNode;
	}
	newNode->prev = h;

	return (newNode);
}
