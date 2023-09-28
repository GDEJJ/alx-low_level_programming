#include "main.h"

/**
 * power_operator - returns the natural square root of a number
 * @a: input number
 * @b: iterator
 * Return: square root or -1
 */
int power_operator(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (power_operator(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root
 * @n: the input number
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	return (power_operator(n, 0));
}
