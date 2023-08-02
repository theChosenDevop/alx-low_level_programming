#include "lists.h"

/**
 * reverse_listint - reverses a listint linked list
 * @head: input
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode, *nextNode;

	prevNode = NULL;
	nextNode = NULL;

	while (*head)
	{
		nextNode = (*head)->next;
		(*head)->next = prevNode;
		prevNode = *head;
		*head = nextNode;
	}
	*head = prevNode;
	return (*head);
}

