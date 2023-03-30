#include "main.h"
/**
 * rot13 - function
 * @s: string
 * Return: s
 */
char *rot13(char *s)
{
	int i, j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alphaa[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 54; j++)
		{
			if (((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A'))
			&& s[i] == alpha[j])
			{
				s[i] = alphaa[j];
				break;
			}
		}
	}
	return (s);
}
