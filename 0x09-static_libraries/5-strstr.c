#include "main.h"

/**
 * _strstr - finds the first occurence of the substring needle
 * in the string haystack
 * @haystack: input
 * @needle: input
 * Return: (0)a pointer to the beginning of the located substring or NUll
 * if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *tNeedle = needle;
	char *result = haystack;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = tNeedle;
		result++;
		haystack = result;
	}
	return (0);
}
