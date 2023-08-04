#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1  if little endian
 */

int get_endianness(void)
{
	u_int32_t val;
	u_int8_t *ptr;

	val = 0x12345678;
	ptr = (u_int8_t *)&val;

	if (*ptr == 0x78)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
