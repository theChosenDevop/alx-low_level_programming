#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9, folllowed by a new line
 *
 * Return: void
 *
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar('0' + n);
	}

	_putchar('\n');
}
