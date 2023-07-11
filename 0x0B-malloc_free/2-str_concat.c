#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: input
 * @s2: input
 * Return: pointer to newly allocated memory containing contents of
 * s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;

	int size, len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
	{
		;
	}

	size = 0;

	size = len1 + len2 + 1;

	ptr = (char *)(malloc(sizeof(*ptr) * size));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; s2[j]; j++)
	{
		ptr[i + j] = s2[j];
	}

	ptr[i + j] = '\0';

	return (ptr);

}
