#include "lists.h"
/**
 * print_dlistint - func that prints all elements in d list
 * @h: head
 * Return: number or els
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
