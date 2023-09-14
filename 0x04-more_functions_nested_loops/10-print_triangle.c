#include "main.h"

/**
 * print_triangle - function that prints triangle using #
 * @size: parameter function
 * Return: void
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (x = 0 ; x <= size ; x++)
		{
			for (y = 0 ; y < size - x ; y++)
			{
				_putchar(' ');
			}
			for (z = 0 ; z < x ; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
