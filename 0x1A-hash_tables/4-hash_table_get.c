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
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
