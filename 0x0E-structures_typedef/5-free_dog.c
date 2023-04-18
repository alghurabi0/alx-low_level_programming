#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees the memory
 * @d: dogs to free
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
