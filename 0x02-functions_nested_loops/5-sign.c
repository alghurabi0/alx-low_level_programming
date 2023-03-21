#include "main.h"
/**
 * print_sign - main block
 * @n : variable
 * Return: 0 or 1 or -1
 */
int print_sign(int n)
{
	int lala;

	if (n > 0)
	{
		lala = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		lala = 0;
		_putchar('0');
	}
	else
	{
		lala = -1;
		_putchar('-');
	}
	return (lala);
}
