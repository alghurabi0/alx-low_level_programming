#include "main.h"
#include <string.h>
/**
 * is_palindrome - main function
 * @s: string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
		return (1);
	if (s[0] != s[len - 1])
		return (0);
	else if (len == 1 || len == 2)
		return (1);
	else
	{
		s[len - 1] = '\0';
		return (is_palindrome(&s[1]));
	}
}
