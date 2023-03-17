#include <stdio.h>
/**
 * main - main block
 * Description: Print numer with putchar
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		int digit = n + '0';
		putchar(digit);
	}

	putchar('\n');
	return (0);
}
