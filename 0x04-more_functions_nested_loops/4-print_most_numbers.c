#include "main.h"
/**
 * print_most_numbers - main block
 * Return: 0
 */
void print_most_numbers(void)
{
	char i;

	while (i = '0'; i <= '9'; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
