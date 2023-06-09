#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current_node = h;
	size_t node_count = 0;

	while (current_node != NULL)
	{
		if (current_node->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", current_node->len, current_node->str);
		node_count++;
		current_node = current_node->next;
	}
	return (node_count);
}
