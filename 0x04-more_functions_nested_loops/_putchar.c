#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes buf(&c) to the STDOUT(1) of size n of 1
 * @c: char c
 * Return:1 for success or -1 for error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
