#include "lists.h"

/**
 * free_list - free linked list
 * @head: input
 * Return: void
 */
void free_list(listm_t **head)
{
	listm_t *prevNode, *nextNode;

	if (head)
	{
		nextNode = *head;
		while ((prevNode = nextNode) != NULL)
		{
			nextNode = nextNode->next;
			free(prevNode);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe -prints a listint_t linked list
 * @head: input
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nNode = 0;
	listm_t *temp, *new, *curr;

	temp = NULL;
	while (head)
	{
		new = malloc(sizeof(listm_t));
		if (new == NULL)
		{
			exit(98);
		}
		new->p = (void *)head;
		new->next = temp;
		temp = new;
		curr = temp;
		while (curr->next != NULL)
		{
			curr = curr->next;
			if (head == curr->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_list(&temp);
				return (nNode);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nNode++;
	}
	free_list(&temp);
	return (nNode);
}
