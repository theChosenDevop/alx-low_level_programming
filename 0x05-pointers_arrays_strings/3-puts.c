#include "main.h"

/**
 * _puts - entry point
 * @str: parameter(pointer variable)
 * Description: outputs string with new line
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
