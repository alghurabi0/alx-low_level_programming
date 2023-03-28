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

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
			num = num * 10 + (s[i] - '0');
		if (num != 0 && !(s[i + 1] >= '0' && s[i + 1] <= '9'))
			break;
		i++;
	}
	retun (sign * num);
}
