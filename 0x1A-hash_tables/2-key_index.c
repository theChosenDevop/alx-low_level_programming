#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: input
 * @size: size of the array of the hash table
 * Return: index at which key/value ipair should be stored
 * in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
