#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - searches for a value in an array of integers using
 * the Linear search algorithm
 * @array: pointer to the first element of an array
 * @size: number of element in an array
 * @value: value to search for
 * Return: the first index where value is located
 * If value is not present in array or if array is NULL, must return -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;
	int top = size;

	if (array == NULL)
		return (-1);

	while (i < top)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (*(array + i) == value)
			return (i);
		i++;
	}
	return (-1);
}
