#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day of jack bauer,
 * starting from 00:00 to 23:59
 * Return: void
 */

void jack_bauer(void)
{
	int m, s;

	for (m = 0; m < 24; m++)
	{
		for (s = 0; s < 60; s++)
		{
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar(':');
			_putchar((s / 10) + '0');
			_putchar((s % 10) + '0');
			_putchar('\n');
		}
	}
}
