#include "main.h"
/**
 * more_numbers - main block
 * Return: 0
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
			_putchar(i);
	}
	_putchar('\n');
}
