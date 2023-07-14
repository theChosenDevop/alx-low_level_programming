#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: input
 * @size: input
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
		mem[i] = 0;

	return (mem);
}
