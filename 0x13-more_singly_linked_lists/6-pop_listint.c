#include "lists.h"
/**
 * pop_listint - deletes the head of
 * a linked list, and returns the head node's data (n)
 * @head: points to the head of the list
 * Return: the head node's data (n) or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *next_node;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	next_node = (*head)->next;
	free(*head);
	*head = next_node;
	return (data);
}
