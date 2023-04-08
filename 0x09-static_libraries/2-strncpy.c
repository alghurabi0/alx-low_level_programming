#include "main.h"
/**
 * _strncpy - main function
 * @dest: var
 * @src: string
 * @n: most bytes of src wil be used
 * Return: dstt
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	for ( ; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
