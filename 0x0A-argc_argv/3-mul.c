#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (-1);
	}
	for (i = 1; i < argc; i++)
		j *= atoi(argv[i]);
	printf("%d\n", j);
	return (0);
}
