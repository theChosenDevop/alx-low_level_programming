#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print 10 times alphabet in lowercase
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
