#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * @haystack: string
 * @needle: string
 * Return: a pointer to the beginning of the located substring, or NULL if the substinf is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
