#include "function_pointers.h"

/**
 * array_iterator - executes a function parameter on each array element
 * @size: size of the array
 * @array: pointer to integer
 * @action: pointer to the function you need to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !size)
		return;

	while (size > i)
	{
		action(array[i]);
		i++;
	}
}
