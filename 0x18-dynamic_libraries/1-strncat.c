#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: parameter
 * @src: parameter
 * @n: size of src pointer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
			break;
		j++;
	}
	return (dest);
}
