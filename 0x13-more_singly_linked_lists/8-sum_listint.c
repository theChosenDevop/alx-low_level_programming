#include "lists.h"

/**
 * sum_listint - the sum of all data(m) of a listint_t linked list
 * @head: input
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
