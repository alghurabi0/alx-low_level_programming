#include "main.h"
/**
 * more_numbers - main block
 * Return: 0
 */
void more_numbers(void)
{
	int i, j;

	j = '0';
	while (j < 10)
	{
		i = '0';
		while (i <= 14)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
