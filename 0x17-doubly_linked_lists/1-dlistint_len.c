#include "lists.h"
/**
 * dlistint_len - func that prints all elements in d list
 * @h: head
 * Return: number or els
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
