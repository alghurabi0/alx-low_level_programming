#include "main.h"
/**
 * set_bit - function gthat sets bit
 * @n: unsigned long int
 * @index: unsigned long in
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	mask = 1UL << index;
	*n |= mask;
	return (1);
}
