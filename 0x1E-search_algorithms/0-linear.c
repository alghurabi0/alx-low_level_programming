#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - search algorithm linear
 * @array: array to search through
 * @size: size of the array
 * @value: value to search for
 * Return: int
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
