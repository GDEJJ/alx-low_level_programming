#include "main.h"

/**
 * -abs - function to define absolute value
 *  @a - function parameter
 *  Return: -a or a
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
		return (a);
	return (0);
}
