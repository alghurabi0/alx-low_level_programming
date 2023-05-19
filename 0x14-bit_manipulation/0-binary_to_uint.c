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
	size_t i;

	if (b == NULL)
		return 0;
	for (i = 0; i < len; i++)
	{
		if (b[i] == '0')
			result += pow(2, len - 1 - i);
		else if (b[i] == '1')
			result += pow(2, len - 1 - i);
		else
			return (0);
	}
	return (result);
}

