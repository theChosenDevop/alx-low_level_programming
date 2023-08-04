#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned integer
 * @b: pointer to constant character
 * Return: 0 if NULL or not 0 or 1, or return converted numbers
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec;
	int n, len, power;

	len = 0;
	n = 0;
	dec = 0;
	power = 1;

	if (b == NULL)
	{
		return (0);
	}
	while (b[n])
	{
		if (b[n] != '1' &&  b[n] != '0')
		{
			return (0);
		}
		n++;
	}
	for (len = n - 1; len >= 0; len--)
	{
		if (b[len] == '1')
			dec += power;
		power *= 2;
	}
	return (dec);
}
