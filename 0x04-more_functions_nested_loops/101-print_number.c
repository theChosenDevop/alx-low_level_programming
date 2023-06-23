#include "main.h"

/**
 * print_number - print an integer
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	unsigned int x, y, num;

	if (n < 0)
	{
		_putchar(45);
		x = n * -1;
	}
	else
	{
		x = n;
	}

	y = x;
	num = 1;

	while (y > 9)
	{
		y  /= 10;
		num *= 10;
	}

	for (; num >= 1; num /= 10)
	{
		_putchar(((x / num) % 10) + 48);
	}
}
