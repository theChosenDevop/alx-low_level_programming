#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: input
 * @idx: input
 * @n: input
 * Return: address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp;
	unsigned int i;

	temp = *head;

	if (idx)
	{
		for (i = 0; i < idx - 1 && temp; i++)
		{
			temp = temp->next;
		}
	}
	if (temp == NULL && idx != 0)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		newNode->next = temp->next;
		temp->next = newNode;
	}
	return (newNode);
}
