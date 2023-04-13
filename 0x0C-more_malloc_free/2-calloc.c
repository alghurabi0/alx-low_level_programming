#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function
 * @nmemb: un int
 * @size: un int
 * Return: null or ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	unsigned int i;
	char *b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	b = (char *)a;
	for (i = 0; i < (nmemb * size); i++)
		b[i] = 0;
	return (a);
}
