#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: char c
 * Return: 1 if c is a letter or 0 if not a letter
 */

int _isalpha(int c)
{
	return (c >= 'A' && c <= 'z');
}
