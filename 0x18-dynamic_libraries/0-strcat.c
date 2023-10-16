#include "main.h"

/**
 * _strcat - concatenates two string
 * @dest: pointer to char
 * @src: pointer to char
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
