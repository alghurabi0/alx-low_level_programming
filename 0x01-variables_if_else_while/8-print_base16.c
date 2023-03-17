#include <stdio.h>
/**
 * main - main block
 * Description: Print numers of base 16
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = '0'; c <= 'f'; c++)
	{
		if (c <= '9' || c >= 'a')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
