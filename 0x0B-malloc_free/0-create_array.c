#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * and initilaize it to a specific character
 * @size: int
 * @c: char
 * Return: NULL or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr
	unsigned int i;

	if (size == 0)
		return (0);
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (0);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
