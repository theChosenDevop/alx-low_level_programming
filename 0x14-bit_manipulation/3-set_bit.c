#include "main.h"

/**
* set_bit - set value of a bit to 1 at a givn index
* @n: input
* @index: input
* Return: bits at index if success(1) or error (-1)
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}

