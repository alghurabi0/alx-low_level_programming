#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: node head
 * Return: freed list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

