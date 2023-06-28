#include "main.h"

/**
 * puts_half - prints half of odd/even string, followed by a new line
 * @str: pointer to str
 * Return: void
 */

void puts_half(char *str)
{
	int count, j = 0;

	for (count = 0; str[count] != '\0'; count++)
		;
	if (count % 2 == 1)
	{
		j = count / 2;
	} else
	{
		j = (count - 1) / 2;
	}

	for (j++; j <= count; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
