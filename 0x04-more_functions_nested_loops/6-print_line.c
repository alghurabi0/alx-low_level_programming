#include "main.h"
/**
 * print_line - main lock
 * @n: var
 * Return: 0
 */
void print_line(int n)
{
	char c;

	while (n >= 1 && c < n)
	{
		_putchar('_');
		c++;
	}
		_putchar('\n');
}
