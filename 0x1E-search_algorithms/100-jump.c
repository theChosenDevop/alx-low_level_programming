#include "search_algos.h"
#include <math.h>

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
	int i, prev = 0, step = 0, sqr = sqrt(size);


	if (array == NULL || size == 0)
		return (-1);

	while (step < (int)size && array[step] < value)
	{
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		prev = step;
		step += sqr;
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, step);
	if (step > ((int)size - 1))
		step = size - 1;

	for (i = prev; i <= step && array[i] <= value; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
