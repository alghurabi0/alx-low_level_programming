#include "main.h"
/**
 * print_diagonal - main block
 * @n: var
 * Return: 0
 */
void print_diagonal(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		while (i < n && n > 0)
		{
			_putchar(' ');
			i++;
		}
		_putchar('\\');
	}
	_putchar('\n');
}
