#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer variable
 * @size: size of an array
 * @cmp: pointer to function toc compare values
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
