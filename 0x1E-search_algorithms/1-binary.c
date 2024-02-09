#include "search_algos.h"

/**
 * binary_search - Function that searches for a value ina sorted array
 * of integers using Binary Search Algorithm
 * @array: A pointer to the first element of the array to search in
 * @value: The value to search for
 * @size: The number of elements in array
 * Return: -1 if value not present in array or array is NULL or found index
 */
int binary_search(int *array, size_t size, int value)
{
	int half, i, left = 0, right = size - 1;

	if (array == NULL)
		return (-1);
	if (!value)
		return (-1);
	if (!size)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");

		half = left + (right - left) / 2;

		if (array[half] == value)
			return (value);
		else if (array[half] < value)
			left = half + 1;
		else
			right = half - 1;
	}
	return (-1);
}
