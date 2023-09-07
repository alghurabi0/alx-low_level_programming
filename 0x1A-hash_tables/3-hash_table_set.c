#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: item key
 * @value: item value
 * Return: 1 on succession or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item, *current_item;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current_item = ht->array[index];
	while (current_item != NULL)
	{
		if (strcmp(current_item->key, key) == 0)
		{
			free(current_item->value);
			current_item->value = strdup(value);
			if (current_item->value == NULL)
				return (0);
			return (1);
		}
	}
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	item->key = strdup(key);
	item->value = strdup(value);
	if (item->key == NULL || item-> value == NULL)
	{
		free(item->key);
		free(item->value);
		free(item);
		return (0);
	}
	item->next = ht->array[index];
	ht->array[index] = item;

	return (1);
}
