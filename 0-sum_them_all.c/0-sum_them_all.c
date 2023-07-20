#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameter
 * @n: unsigned integer
 * Return: sum of parameter
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list po;
	unsigned int i, sum;

	va_start(po, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(po, int);
	}

	return (sum);
}
