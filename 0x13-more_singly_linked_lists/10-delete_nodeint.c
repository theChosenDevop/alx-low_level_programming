#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a listint_t linked list
 * @head: input
 * @index: input
 * Return: 1 for success and -1 fro failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pNode, *nNode;
	unsigned int i;

	pNode = *head;
	if (index)
	{
		for (i = 0; i < (index - 1) && pNode; i++)
		{
			pNode = pNode->next;
		}
	}
	if (!pNode || (pNode->next == NULL && index != 0))
	{
		return (-1);
	}
	nNode = pNode->next;
	if (index)
	{
		pNode->next = nNode->next;
		free(nNode);
	}
	else
	{
		free(pNode);
		*head = nNode;
	}

	return (1);
}
