#include "main.h"

/**
 * puts_half - prints half of odd/even string, followed by a new line
 * @str: pointer to str
 * Return: void
 */

void puts_half(char *str)
{
	int i, j = 0;

	for (i = 0; str[i] != '\0'; i++)
		;
	if (i % 2 == 0)
	{
		j = i / 2;
	} else
	{
		j = (i - 1) / 2;
	}

	for (; j <= i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
