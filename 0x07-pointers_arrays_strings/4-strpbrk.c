#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locates the first occurence in the string
 * of any of the bytes in the string accept
 * @s: input
 * @accept: input
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; *(s + i); i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
