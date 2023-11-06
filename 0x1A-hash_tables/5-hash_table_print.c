#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hashtable
 * Return: Key-value pairs of hashtable
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *arr_pointer;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			if (comma_flag == 1)
				printf(", ");

			arr_pointer = ht->array[index];
			while (arr_pointer)
			{
				printf("'%s':'%s'", arr_pointer->key, arr_pointer->value);
				arr_pointer = arr_pointer->next;
				if (arr_pointer)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
