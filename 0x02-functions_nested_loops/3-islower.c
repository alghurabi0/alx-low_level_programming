#include "main.h"
/**
 * int_islower - main block
 * Return: 1 if 'c' is lowercase
 * Otherwise return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
