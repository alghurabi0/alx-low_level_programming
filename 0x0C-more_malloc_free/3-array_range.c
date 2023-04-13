#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers containing
 * all values from min to max.
 * @min: The minimum value to include in the array.
 * @max: The maximum value to include in the array.
 * Return: A pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = min + i;
	return (array);
}
