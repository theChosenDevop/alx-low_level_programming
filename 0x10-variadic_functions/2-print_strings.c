#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lp;
	const char *str;
	unsigned int i;

	va_start(lp, n);
	i = 0;

	while (i < n)
	{
		str = va_arg(lp, char *);
		printf("%s", (str != NULL) ? str : "(nil)");
		if ((separator != NULL) && (i != (n - 1)))
			printf("%s", separator);
		i++;
	}
	va_end(lp);
	printf("\n");
}
