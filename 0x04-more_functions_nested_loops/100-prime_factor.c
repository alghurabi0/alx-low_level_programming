#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	long int i = 612852475143;
	long int j = 2;

	while (i > j)
	{
		if (i % j == 0)
			i /= j;
		else
			j++;
	}
	printf("%ld\n", j);
	return (0);
}
