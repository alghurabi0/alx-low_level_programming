#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the copied string to store in the new memory area
 * Return: On success, the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *a;
	int i = 0;
	int j;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	a = malloc(sizeof(char) * i);
	for (j = 0; j <= i; j++)
		a[j] = str[j];
	return (a);
}
