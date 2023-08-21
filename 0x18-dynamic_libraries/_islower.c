#include "main.h"
/**
 * _islower - main block
 * islower(int c) - lower
 * @c : character to check the letter
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
