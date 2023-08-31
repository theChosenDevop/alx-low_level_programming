#include <stdint.h>
#include "main.h"

/**
* get_endianness - check endianness
* Return: void
*/

int get_endianness(void)
{
	uint32_t val;
	uint8_t *ptr;

	val = 0x12345678;
	ptr = (uint8_t *)&val;

	if (*ptr == 0x78)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
