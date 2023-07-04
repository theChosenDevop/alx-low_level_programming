#include "main.h"

/**
 * _strspn - get the length of prefix substring
 * @s: pointer to char
 * @accept: pointer to char
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *j = accept;

	while (*s++)
	{
		while(*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				i++;
				break;
			}
		}
		if (!(*--accept))
			break;
		accept = j;
	}

	return (i);
}
