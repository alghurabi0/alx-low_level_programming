#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head of the list_t list
 * Return: the number of elements in the list_t list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current_node = h;

	while (current_node != NULL)
	{
		count++;
		current_node = current_node->next;
	}
	return (count);
}
