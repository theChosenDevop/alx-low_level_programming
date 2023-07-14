#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: input
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *allocMem = malloc(b);

	if (allocMem == NULL)
	{
		exit(98);
	}

	return (allocMem);
}
