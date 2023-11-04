#include "hash_tables.h"

/**
 * hash_table_create - creates an hashtable containing
 * indices of array of key : value pair
 * @size: size of hashtable
 * Return: NULL for errors or return a pointer to a new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t *));
	if (!table->array)
		return (NULL);

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
