#include "main.h"
/**
 * print_alphabet_x10 - main block
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int j = 0;

	while (j < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		j++;
	}
}
