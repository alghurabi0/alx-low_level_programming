#include "main.h"
/**
 * print_binary - a function that prints binary
 * @n: unsinged long int
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int leadingZeros = 1;

	if (n == 0)
	{
		printf("0");
		return;
	}
	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			printf("1");
			leadingZeros = 0;
		}
		else if (!leadingZeros)
			printf("0");
		mask >>= 1;
	}
}

