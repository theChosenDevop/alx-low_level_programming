#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated with a call
 * to malloc(old_size)
 * @old_size: size in bytes of allocated space for ptr
 * @new_size: new size in bytes of new memory block
 * Return: pointer to allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, maxSize = new_size;
	char *oldptr = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}

	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
		maxSize = old_size;
	for (i = 0; i < maxSize; i++)
	{
		p[i] = oldptr[i];
	}
	free(ptr);
	return (p);
}
