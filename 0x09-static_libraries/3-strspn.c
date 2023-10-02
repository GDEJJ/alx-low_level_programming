#include "main.h"

/**
 * _strspn - gets the length of a string
 * @s: source string
 * @accept: string to search
 * Return: number of characters matched
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; s[i] != accept[j] ; j++)
		{
			if (accept[j] == '\n')
				return (i);
		}
	}
	return (0);
}
