#include "main.h"
/**
 * binary_to_unint - func
 * @b: b
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	size_t len = strlen(b);
	unsigned int result = 0;
	int i;
	unsigned int base = 1;

	if (b == NULL)
		return (0);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			result += base;
		base *= 2;
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	return (result);
}

