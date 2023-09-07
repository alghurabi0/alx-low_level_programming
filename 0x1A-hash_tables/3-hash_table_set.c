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
	char *val_clone;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	val_clone = strdup(value);
	if (val_clone == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current_item = ht->array[index];

	while (current_item != NULL)
	{
		if (strcmp(current_item->key, key) == 0)
		{
			free(current_item->value);
			current_item->value = val_clone;
			return (1);
		}
		current_item = current_item->next;
	}
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
	{
		free(val_clone);
		return (0);
	}
	item->key = strdup(key);
	if (item->key == NULL)
	{
		free(item);
		return (0);
	}
	item->value = val_clone;
	item->next = ht->array[index];
	ht->array[index] = item;

	return (0);
}
