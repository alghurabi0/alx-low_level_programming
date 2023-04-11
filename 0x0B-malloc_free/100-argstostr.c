#include "main.h"
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: int
 * @av: char
 * Return: NULL if ac == 0 or av == NULL
 * Returns a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i;
	int length;
	int total_length;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	total_length = 0;
	for (int i = 0; i < ac; i++)
	{
		length = 0;
		while (av[i][length] != '\0')
			length++;
		total_length += length + 1;
	}
	result = malloc(sizeof(char) * total_length);
	if (result == NULL)
		return (NULL);
	int position = 0;

	for (i = 0; i < ac; i++)
	{
		length = 0;
		while (av[i][length] != '\0')
		{
			result[position] = av[i][length];
			position++;
			length++;
		}
		result[position] = '\n';
		position++;
	}
	result[position] = '\0';
	return (result);
}
