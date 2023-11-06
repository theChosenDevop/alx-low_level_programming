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
	char *val_cpy;
	hash_node_t *new_node, *node;

	if (key == NULL || ht == NULL || value == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	val_cpy = strdup(value);
	if (val_cpy == NULL)
		return (0);
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = val_cpy;
			return (1);
		}
		node = node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(val_cpy);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(val_cpy);
		free(new_node);
		return (0);
	}
	new_node->value = val_cpy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
