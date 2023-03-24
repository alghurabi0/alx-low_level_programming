#include "main.h"
/**
 * print_number - main block
 * @n: var
 * Return: 0
 */
void print_number(int n)
{
	int num = n;
	int power = 1;
	int num_val;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	while (num / power >= 10)
	{
		power *= 10;
	}
	while (power > 0)
	{
		num_val = num / power;
		_putchar(num_val + '0');
		num -= num_val * power;
		power /= 10;
	}
}
