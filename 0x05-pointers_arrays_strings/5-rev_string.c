#include "main.h"
/**
 * print_rev - main
 * @s: var
 * Return: 0
 */
void rev_string(char *s)
{
	int len = 0;
	char *a = s;
	char *b = s;
	char temp;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (int i = 0; i < len / 2; i++)
	{
		temp = *b;
		*b = *a;
		*a = temp;
		a++;
		b--;
	}
}
