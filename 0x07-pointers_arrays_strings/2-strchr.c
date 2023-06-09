#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: string
 * @c: the character to locate
 * Return: a pointer to the first occurrence
 * of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s);
		s++;
	}
		if (c == '\0')
			return (s);
		return (0);
}
