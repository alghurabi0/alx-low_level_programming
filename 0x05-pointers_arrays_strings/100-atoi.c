#include "main.h"
/**
 * _atoi - main func
 * @s: var
 * Return: 1 or 0
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int num = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (num < 0 && sign == -1)
				num = num * 10 - (s[i] - '0');
			else
				num = num * 10 + (s[i] - '0');
		}
		else if (num != 0)
			break;
		i++;
	}
	return (sign * num);
}
