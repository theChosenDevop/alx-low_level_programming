#include "main.h"

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

	int match = 0;

	while (*s)
	{
		for (i = 0; *(s + i); i++)
		{
			if (*s == accept[i])
			{
				match += 1;
			}
		}
		if (match)
		{
			break;
		}
		s++;
	}
	return (s);
}
