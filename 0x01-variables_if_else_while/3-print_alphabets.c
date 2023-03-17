#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Print alphabets in lower and then in uppercase
 * Return: 0
 */
int main(void)
{
	    char c;
    int i;

    // print lowercase alphabets
    for (c = 'a'; c <= 'z'; c++)
    {
        putchar(c);
    }

    // print uppercase alphabets
    for (c = 'A'; c <= 'Z'; c++)
    {
        putchar(c);
    }

    putchar('\n');
    return (0);
}
