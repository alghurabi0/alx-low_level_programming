#include "main.h"
/**
 * _sqrt_recursion - finds the square root of an integer
 * @n: int
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_finder(n, 1));
}
/**
 * _sqrt_finder - helps to find a square root
 * @n: int
 * @guess: guess next square root
 * Return: square root
 */
int _sqrt_finder(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (_sqrt_finder(n, guess + 1));
}
