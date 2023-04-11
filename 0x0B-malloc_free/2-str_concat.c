#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer should point to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2, and null
 * terminated
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int n = 0;
	int m = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[n] != '\0')
		n++;
	while (s2[m] != '\0')
		m++;
	str = malloc((sizeof(char) * n) + (sizeof(char) * m) + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		str[i] = s1[i];
	for (j = 0; j <= m; j++)
		str[i + j] = s2[j];
	return (str);
}
