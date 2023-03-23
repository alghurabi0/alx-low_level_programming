#include "main.h"
/**
 * print_line - main lock
 * @n: var
 * Return: 0
 */
void print_line(int n)
{
	char c;

	if (n >= 1)
	{
		c = '_';
		_putchar(c * n);
		_putchar('\n');
	}
	else
		_putchar('\n');
}
