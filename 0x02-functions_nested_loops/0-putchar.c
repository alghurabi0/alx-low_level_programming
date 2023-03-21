#include "main.h"
/**
 * Main - main block
 * Description: print without stdio.h
 * Return: 0
 */
int write();
int _putchar(char c)
{
		return (write(1, &c, 1));
}
int main(void)
{
	char c[9] = "_putchar";
	int i = 0;
	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
