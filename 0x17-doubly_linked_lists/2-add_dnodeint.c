#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of dlistint_t list
 * @head: head of linked list
 * @n: value of node
 * Return: address of new head or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;

	if (head == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head != NULL)
		(*head)->prev = newNode;

	*head = newNode;
	return (*head);
}
