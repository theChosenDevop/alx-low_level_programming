#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: input
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *currNode, *temp;
	int node;

	if (*head == NULL)
	{
		return (0);
	}
	currNode = *head;
	node = currNode->n;
	temp = currNode->next;

	free(currNode);
	*head = temp;
	return (node);
}
