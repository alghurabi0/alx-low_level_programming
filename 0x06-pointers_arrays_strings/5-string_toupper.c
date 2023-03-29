#include "main.h"
/**
 * string_toupper - change lower to upper
 * @str: string
 * Return: 0
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
}
