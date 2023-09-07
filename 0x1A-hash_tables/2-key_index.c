#include "hash_tables.h"
/**
 * key_index - a function that retrives the index of a key
 * @key: key to retrieve its index
 * @size: size of the hash table
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	return (index % size);
}
