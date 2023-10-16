#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: char c parameter
 *
 * Return: 1 if char c is lowercase or 0 if otherwise
 *
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
