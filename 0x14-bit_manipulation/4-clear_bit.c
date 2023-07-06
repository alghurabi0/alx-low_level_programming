#include "main.h"
/**
 * clear_bit - function that clears bit
 * @n: unsigned long in
 * @index: unsinged long int
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	mask = ~(1UL << index);
	*n &= mask;
	return (1);
}

