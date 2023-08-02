#include "lists.h"

/**
 * get_nodeint_at_index - nth node of a listint_t liked list
 * @head: input
 * @index:input
 * Return: nth node of index list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}

	return (head);
}
