#include "main.h"
/**
 * _atoi - main func
 * @s: var
 * Return: 1 or 0
 */
int _atoi(char *s)
{
	int i;
	int sign = 0;
	int num = 0;
	int sig = -1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sig = sig * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10;
			num -= (s[i] - '0');
			sign = 1;
		}
		else if (sign == 1)
			break:
	}
	num = sig * num;
	return (num);
}
