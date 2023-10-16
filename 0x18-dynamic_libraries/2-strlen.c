#include "main.h"

/**
 * _strlen - length of string
 * @s: parameter
 * Return: 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] !=  '\0')
	{
		len++;
	}

	return (len);
}
