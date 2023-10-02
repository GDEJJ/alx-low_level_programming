#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: sring with character
 * @c: character
 * Return: a pointer to the first occurrence of character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
