#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameter
 * @n: unsigned integer
 * Return: sum of parameter
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list po;

	va_start(po, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(po, int);
	}
	va_end(po);
	return (sum);
}
