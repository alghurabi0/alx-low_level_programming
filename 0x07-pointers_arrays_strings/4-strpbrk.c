#include "main.h"
/**
 * _strpbrk - the function locates the first 
 * occurrence in the string s of any of the bytes
 * in the string accept
 * @s: string
 * @accept: string
 * Return: a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL
 * if no such syte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
		for (p = accept; *p; p++)
		{
			if (*s == *p)
				return (s);
		}
		s++;
	}
	return (0);
}
