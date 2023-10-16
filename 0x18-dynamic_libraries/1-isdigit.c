#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 *
 * @c: integer input
 *
 * Return: 1 if c is a digit or 0 if otherwise
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
