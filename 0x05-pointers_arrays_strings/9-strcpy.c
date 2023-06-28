#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte(\0).
 * @dest: pointer to char
 * @src: pointer to char
 * Return: pointer variable dest
 */

char *_strcpy(char *dest, char *src)
{
	int j, i = 0;

	for ( ; src[i] != '\0'; i++)
		;
	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}


