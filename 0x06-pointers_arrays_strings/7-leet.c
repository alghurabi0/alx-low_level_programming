#include "main.h"
/**
 * leet - main function
 * @str: string
 * Return: str
 */
char *leet(char *str)
{
	int i, j;
	char *leet_str = str;

	for (i = 0; leet_str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (leet_str[i] == 'a' || leet_str[i] == 'A')
				leet_str[i] = '4';
			else if (leet_str[i] == 'e' || leet_str[i] == 'E')
				leet_str[i] = '3';
			else if (leet_str[i] == 'o' || leet_str[i] == 'O')
				leet_str[i] = '0';
			else if (leet_str[i] == 't' || leet_str[i] == 'T')
				leet_str[i] = '7';
			else if (leet_str[i] == 'l' || leet_str[i] == 'L')
				leet_str[i] = '1';
		}
	}
	return (str);
}
