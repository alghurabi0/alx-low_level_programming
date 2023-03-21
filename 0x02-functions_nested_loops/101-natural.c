#include "main.h"
#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int i, h;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			h += i;
	}
	printf("%d\n", h);
	return (0);
}
