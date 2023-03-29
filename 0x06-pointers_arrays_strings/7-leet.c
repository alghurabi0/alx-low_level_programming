#include "main.h"
/**
 * leet - main function
 * @str: string
 * Return: str
 */
char *leet(char *str)
{
	int i, j;
	char leet[] = "aeotl";
	char LEET[] = "AEOTL";
	char num[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == leet[j] || str[i] == LEET[j])
			{
				str[i] = num[j];
				break;
			}
		}
	}
	return (str);
}
