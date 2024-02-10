#include "search_algos.h"
#include <math.h>

/**
 * min - finds the minimum value
 * @a: input to be compared
 * @b: input to be compared
 * Returns: minimum value
 */
int min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

/**
 * jump_search - Function searches for a value in a sorted array
 * of integers using the Jump Search algorithm
 * @array: pointer to the first elemnet of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index if value is found OR -1 if value is not present
 * in array / if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size), prev = 0, jSize = size;

	printf("Value checked array[%d] = [%d]\n",prev, array[prev]);
	while (array[min(step, jSize) - 1] < value)
	{
		prev = step;
		step = step + sqrt(jSize);
		
		if (array[prev] >= jSize)
			return (-1);
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, step);

	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

		prev++;

		if (prev == min(step, jSize))
			return (-1);
	}
	if (array[prev] == value)
		return (prev);
	
	return (-1);
}
