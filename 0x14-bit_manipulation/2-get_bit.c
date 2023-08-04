#include "main.h"

/**
 * get_bit - return the value of a bit to 1 at a given index
 * @n: input
 * @index: index of bit
 * Return: 1 (success) or -1 (failure)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num, total_bits;

	num = 1;
	total_bits = sizeof(n) * 8;

	if (index >= total_bits)
		return (-1);

	num <<= index;

	if (num & n)
		return (1);
	else
		return (0);
}
