#include "main.h"

/**
* flip_bits - returns the number of bits to flip to get from n to m
* @n: input
* @m: input
* Return: the bits flipped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;
	unsigned long int xor_sum = n ^ m;

	while (xor_sum)
	{
		flip += xor_sum & 1;
		xor_sum >>= 1;
	}

	return (flip);
}

