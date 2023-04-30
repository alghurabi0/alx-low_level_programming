#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * in a listint_t list
 * @head: double pointer to the head node of the list
 * @idx: index of the list where the new node should be added, starting at 0
 * @n: value to be stored in the new node
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
		return (0);
	current_node = *head;
	for (i = 0; i < idx - 1 && current_node != NULL; i++)
		current_node = current_node->next;
	if (current_node == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
