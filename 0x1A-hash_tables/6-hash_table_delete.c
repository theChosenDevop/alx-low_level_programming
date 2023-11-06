#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: The hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *arr_node, *curr;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		arr_node = ht->array[i];
		while (arr_node)
		{
			curr = arr_node;
			arr_node = arr_node->next;
			free(curr->key);
			free(curr->value);
			free(curr);
		}
	}
	free(ht->array);
	free(ht);
}
