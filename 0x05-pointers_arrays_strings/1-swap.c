#include "main.h"
/**
 * swap_int - main
 * @a: var
 * @b: var
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
