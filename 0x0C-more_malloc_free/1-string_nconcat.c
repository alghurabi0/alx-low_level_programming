#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatatenates to strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes used from s2
 * Return: a pointer to the concancanted string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int m;
	unsigned int d;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n >= j)
		n = j;
	a = malloc(sizeof(char) * (i + n + 1));
	if (a == NULL)
		return (NULL);
	for (m = 0; m < i; m++)
		a[m] = s1[m];
	for (d = 0; d < n; d++)
		a[m + d] = s2[d];
	a[m + d] = '\0';
	return (a);
}
