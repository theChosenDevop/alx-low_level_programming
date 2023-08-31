#include "main.h"

/**
* get_bit - returns bit at a given index
* @n: input
* @index: input
* Return: bit value
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > sizeof(n) * 8)
		return (-1);

	num <<= index;

	if (num & n)
		return (1);

	else
		return (0);
}

