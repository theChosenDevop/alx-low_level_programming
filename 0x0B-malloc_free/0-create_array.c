#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes
 * it with specific char
 * @size: size of array
 * @c: character input
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
