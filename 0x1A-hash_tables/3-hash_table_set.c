#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table to be used to update key/value
 * @key: input
 * @value: bvalue associated with the key
 * Return: 1 for success and 0 for failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *curr_index, *new_node;
	char *n_key, *n_val;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);

	n_key = strdup(key);
	n_val = strdup(value);

	if (n_key == NULL || n_val == NULL)
		return (0);
	
	index = key_index((unsigned char *)key, ht->size);

	curr_index = ht->array[index];
	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(n_key);
		free(n_val);
		return (0);
	}

	new_node->key = n_key;
	new_node->value = n_val;

	if (curr_index)
	{
		new_node->next = curr_index;
		/*ht->array[index] = new_node;*/
		return (1);
	}
	else if (curr_index == NULL)
	{
		new_node->next = NULL;
		ht->array[index] = new_node;
		return (1);
	}
	return (1);
}
