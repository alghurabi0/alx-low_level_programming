#include <stdio.h>
#include "main.h"
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	unsigned long b = 0, c = 1, d;
	float a;

	while (1)
	{
		d = b + c;
		if (d > 4000000)
			break;
		if ((d % 2) == 0)
			a += d;
		b = c;
		c = d;
	}
	printf("%.0f\n", a);
	return (0);
}
