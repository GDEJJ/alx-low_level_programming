#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root
 * @n: input number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find natural square root
 * @n: number to calculate square root
 * @i: iterator
 * Return: resulting square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
	if (i * i > n)
		return (-1);
	if (i * I == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
