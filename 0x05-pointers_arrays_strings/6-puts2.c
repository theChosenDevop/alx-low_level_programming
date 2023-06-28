#include "main.h"

/**
 * puts2 - prints every other character of a string, followed by a new line
 * @str: pointer to char
 * Return: void
 */

void puts2(char *str)
{
	int i, j = 0;

	for (i = 0; str[i] != '\0'; i++)
		;
	i--;
	while (j < i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
