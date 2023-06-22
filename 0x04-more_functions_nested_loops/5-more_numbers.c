#include "main.h"

/**
 * more_numbers - prints 10 times the nuimbers from 0 t0 14
 * Return: void
 */

void more_numbers(void)
{
	int n = 0;
	int k;

	for (; n < 10; n++)
	{
		k = 0;
		while (k <= 14)
		{
			if (k >= 10)
			{
				_putchar((k / 10) + 48);
			}
			_putchar((k % 10) + 48);
			k++;
		}
		_putchar('\n');
	}
}
