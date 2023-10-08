#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: 1 or 0
 */

int *array_range(int min, int max)
{
	int size;
	int *output;
	int i;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	output = malloc(sizeof(int) * size);
	if (output == NULL)
		return (NULL);
	for (i = 0 ; min <= max ; i++)
		output[i] = min++;
	return (output);
}
