#include "lists.h"

/**
 * free_listint - free listint_t list
 * @head: pointer to listint_t
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
