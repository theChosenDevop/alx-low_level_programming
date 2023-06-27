#include "main.h"

/**
 * swap_int - swap integers
 * @a: parameter
 * @b: parameter
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
