#include "main.h"
/**
 * factorial - returns a factorial of an integer
 * @n: integer
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (n * factorial(n - 1));
}
