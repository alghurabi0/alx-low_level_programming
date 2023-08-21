#include "main.h"
/**
 * _strcat - main gunc
 * @dest: var
 * @src: var
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
		if (dest[i] == '\0')
		{
			dest[i] = src[j];
			j++;
		}
	}
	return (dest);
}
