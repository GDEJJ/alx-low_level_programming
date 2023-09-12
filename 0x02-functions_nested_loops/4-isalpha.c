#include "main.h"

/**
 * _isalpha - checks for case sensitivity
 *  @c: parameter to be determined in function
 *  Return: 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		_putchar(1);
	else
		_putchar(0);
	return (0);

}
