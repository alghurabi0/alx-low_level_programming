#include "main.h"
/**
 * is_divisible - second function
 * @n: int
 * @divisor: int
 * Return: 0
 */
int is_divisible(int n, int divisor)
{
	if (divisor == 1)
		return (0);
	if (n % divisor == 0)
		return (1);
	return (is_divisible(n, divisor - 1));
}
/**
 * is_prime_number - main function
 * @n: int
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (!is_divisible(n, n - 1));
}
