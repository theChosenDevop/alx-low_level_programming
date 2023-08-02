#include "lists.h"

/**
 * free_listint2 - free listint_t list
 * @head: input
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *currNode, *temp;

	if (head != NULL)
	{
		currNode = *head;
		while ((temp = currNode) != NULL)
		{
			currNode = currNode->next;
			free(temp);
		}
		*head = NULL;
	}
}
