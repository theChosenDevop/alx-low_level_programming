#include "main.h"

/**
 * _puts - entry point
 * @s: parameter(pointer variable)
 * Description: outputs string with new line
 * Return: void
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
