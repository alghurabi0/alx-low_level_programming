#include "main.h"
/**
 * get_bit - func that gets bit
 * @n: unsigne long int
 * @index: unisgne long int
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	bit_value = (n & mask) ? 1 : 0;
	return (bit_value);
}

