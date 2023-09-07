#include "hash_tables.h"
/**
 * hash_table_get - gets a value of a key in a hash table
 * @ht: hash table
 * @key: the key to get value
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, size;

	size = ht->size;
	index = key_index((const unsigned char *)key, size);

	if (ht->array[index] == NULL)
		return (NULL);

	return (ht->array[index]->value);
}
