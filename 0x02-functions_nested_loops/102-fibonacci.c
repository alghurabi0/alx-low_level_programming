#include "main.h"
#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int a;
	unsigned long b = 0, c = 1, d;

	for (a = 0; a < 50; a++)
	{
		d = b + c;
		printf("%lu", d);
		b = c;
		c = d;
		if (a == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
