#include "main.h"
/**
 * print_most_numbers - main block
 * Return: 0
 */
void print_most_numbers(void)
{
	char i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
		i++;
	}
	_putchar('\n');
}
