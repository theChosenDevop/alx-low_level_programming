#include "search_algos.h"

/**
 * interpolation_search - searches for a vlaue in asorted array
 * of integers using INterpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: position OR -1 if value is not in array or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int pos = 0, high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (array[high] != array[low])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));

		if (pos > (int) size)
		{
			printf("Value checked array[%d] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);

		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}
	if (value == array[low])
		return (low);
	else
		return (-1);
}
