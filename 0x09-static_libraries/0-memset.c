#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: input
 * @b: input
 * @n: input
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
