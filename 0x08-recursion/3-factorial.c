#include "main.h"
/**
 * factorial - returns a factorial of an integer
 * @n: integer
 * Return: factorial
 */
int factorial(int n)
{
	int subfactorial = factorial(n - 1);
	int result = n * subfactorial;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return result;
}
