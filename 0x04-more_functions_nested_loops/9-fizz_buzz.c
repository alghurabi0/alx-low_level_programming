#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int i = 1;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			putchar(' ');
	}
	printf("\n");
	return (0);
}
