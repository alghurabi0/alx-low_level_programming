#include <stdio.h>
/**
 * main - main block
 * Description: Print all single digit combinations
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
