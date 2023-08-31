#include "main.h"

/**
* binary_to_uint - converts binary to unsigned int
* @b: pointer input
* Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_num = 0;
	unsigned int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			dec_num = (dec_num << 1) + 0;
		else if (b[i] == '1')
			dec_num = (dec_num << 1) + 1;
		else
			return (0);
	}

	return (dec_num);
}


