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
	unsigned long int index, i;
	hash_node_t *item;
	char *val_clone;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	val_clone = strdup(value);
	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val_clone;
			return (1);
		}
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
