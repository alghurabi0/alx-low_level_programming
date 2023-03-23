#include "main.h"
/**
 * mul - main block
 * @a: var
 * @b: var
 * Return: 0
 */
int mul(int a, int b)
{
	int i;

	if ((a >= 0 && a <= 127) && (b <= 0 && b <= 127))
	{
		i = a * b;
		return (i);
	}
}
