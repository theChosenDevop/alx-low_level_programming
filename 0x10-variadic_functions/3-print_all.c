#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: List of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char c;
	int i;
	double f;
	char *s;
	int j;

	va_start(ap, format);
	j = 0;

	while (format[j])
	{
		if (format[j] == 'c')
		{
			c = va_arg(ap, int);
			printf("%c", c);
		}
		else if (format[j] == 'i')
		{
			i = va_arg(ap, int);
			printf("%d", i);
		}
		else if (format[j] == 'f')
		{
			f = va_arg(ap, double);
			printf("%f", f);
		}
		else if (format[j] == 's')
		{
			s = va_arg(ap, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
		}
		if (format[j])
		{
			printf(", ");
		}
		j++;
	}
	va_end(ap);
	putchar('\n');
}
		
