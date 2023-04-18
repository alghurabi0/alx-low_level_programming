#include "dog.h"
#include <stdio.h>
/**
 * print_dog - fuction
 * @d: element of strct dog
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
