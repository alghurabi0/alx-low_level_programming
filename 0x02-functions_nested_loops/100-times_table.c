#include "main.h"
/**
 * print_times_table - main block
 * @n: var
 * Return: 0
 */

void print_times_table(int n)
{

	int a = 0, c, b;

	if (n < 0 || n > 15)
		return;
	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			if (b == 0)
				_putchar('0' + c);
			else if (c < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + c);
			}
			else if (c < 100)
			{
				_putchar(' ');
				_putchar('0' + c / 10);
				_putchar('0' + c % 10);
			}
			else
			{
				_putchar('0' + c / 100);
				_putchar('0' + (c - 100) / 10);
				_putchar('0' + c % 10);
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}

