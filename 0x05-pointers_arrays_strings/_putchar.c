#include <unistd.h>

/**
 * _putchar - writes the character
 * @c: the var
 * Return: On success 1.
 * On error, -1 is returned, and error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
