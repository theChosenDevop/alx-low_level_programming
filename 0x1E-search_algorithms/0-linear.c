#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 * the Linear search algorithm
 * @array: pointer to the first element of an array
 * @size: number of element in an array
 * @value: value to search for
 * Return: -1(failure) or index for success
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;
	int top = size;

	if (*array == 0)
		return (-1);

	while (i < top)
	{
		printf("Value checked array [%d] = [%d]\n", i, *(array + i));
		if (*(array + i) == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
