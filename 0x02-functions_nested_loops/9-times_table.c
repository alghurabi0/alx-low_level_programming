#include "main.h"
/**
 * times_table - main lock
 * Return: 0
 */
void times_table(void)
{
	int x, m, n;
	
	for (x = 0; x <= 9; x++)
	{
		_putchar('0');
		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');
			n = x * m;
			if (n <= 9)
				_putchar(' ');
			else
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
