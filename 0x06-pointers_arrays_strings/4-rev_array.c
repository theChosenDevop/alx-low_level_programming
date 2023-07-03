#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: input
 * @n: input
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = 0;

	while (j < n / 2)
	{
		i = a[j];
		a[j] = a[n - 1 - j];
		a[n - 1 - j] = i;
		j++;
	}
}
