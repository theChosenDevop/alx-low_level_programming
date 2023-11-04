#include "hash_tables.h"

/**
 * hash_table_create - creates an hashtable containing
 * indices of array of key : value pair
 * @size: size of hashtable
 * Return: table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!table)
		return NULL;
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
		return NULL;

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
