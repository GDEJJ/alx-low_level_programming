#include "main.h"

/**
 * print_triangle - function that prints triangle using #
 * @size: parameter function
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int x, y;

		for (x = 1 ; x <= size ; x++)
		{
			for (y = 0 ; y < size - x ; y++)
			{
				_putchar(' ');
			}
			for (y = 1 ; y <= x ; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
