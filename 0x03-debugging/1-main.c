#include <stdio.h>

/**
 * main - infinite loop happens because i is not incrementing
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}

	printf("infinite loop happens because i is not incrementing! \\o/\n");

	return (0);
}
