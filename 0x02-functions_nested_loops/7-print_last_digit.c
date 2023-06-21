#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - output the last digit
 *
 * @n: input
 *
 * Return: value
 *
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;

	_putchar('0' + last);

	return (last);
}
