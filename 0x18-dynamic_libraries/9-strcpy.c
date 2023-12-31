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
	int i = 0;

	for ( ; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}


