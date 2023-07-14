#include <stdlib.h>

/**
 * array_range - contains all values from min to max
 * @min: input
 * @max: input
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, k;
	int *a;

	if (min > max)
		return (NULL);
	k = max - min + 1;
	a = malloc(sizeof(int) * k);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < k; i++, min++)
		a[i] = min;
	return (a);
}
