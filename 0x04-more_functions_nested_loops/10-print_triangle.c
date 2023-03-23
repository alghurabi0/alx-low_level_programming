#include "main.h"
/**
 * print_triangle - main block
 * @size: var
 * Return: 0
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = size; i > 0; i--)
	{
		for (j = 1; j <= size; j++)
		{
		if (j >= i)
			_putchar('#');
		else
			_putchar(' ');
		}
		_putchar('\n');
	}
}
