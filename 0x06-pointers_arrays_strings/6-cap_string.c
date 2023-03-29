#include "main.h"
/**
 * cap_string - func
 * @str: string to be capitilized
 * Return: string
 */
char *cap_string(char *str)
{
	int i = 0;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	for (i = 1; i < j; i++)
	{
		if (str[i] == 32 || str[i] == 9 || str[i] == 10 || str[i] == 44 ||
		 str[i] == 59 || str[i] == 46 || str[i] == 33 || str[i] == 63 ||
		 str[i] == 34 || str[i] == 40 || str[i] == 41 || str[i] == 123 ||
		 str[i] == 125)
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i +  1] - 32;
	}
	return (str);
}
