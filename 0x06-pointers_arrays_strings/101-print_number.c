#include "main.h"
/**
 * print_number - printing function
 * @int: var
 * Return: 0
 */
void print_number(int n)
{
	unsigned int nn;

	nn = n;
	if (n < 0)
	{
		_putchar('-');
		nn = -n;
	}
	if (nn / 10 != 0)
		print_number(n / 10);
	_putchar((nn % 10) + '0');
}
