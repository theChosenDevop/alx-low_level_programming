#include "search_algos.h"

/**
 * binary_search - Function that searches for a value ina sorted array
 * of integers using Binary Search Algorithm
 * @array: A pointer to the first element of the array to search in
 * @value: The value to search for
 * @size: The number of elements in array
 * Return: -1 if value not present in array or rray is NULL or found index
 */
int binary_search(int *array, size_t size, int value)
{
	int half, top;
	size_t i;

    printf("Searching in array: ");
    for (i = 0; i < size; i++) {
        printf("%d", array[i]);
        if (i < size - 1)
            printf(",");
    }
    printf("\n");

    top = size - 1;
    half = top / 2;

    if (array[half] < value)
        return binary_search(array + half + 1, size - half - 1, value);
    else if (array[half] > value)
        return binary_search(array, half, value);
    else
        return half;

    return -1;
}
