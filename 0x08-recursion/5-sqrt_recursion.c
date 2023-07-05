#include "main.h"

/**
 * _sqrt - finds the natural square root
 * @num: input
 * @root: input
 * Return: value
 */

int _sqrt(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}
	if (root == num / 2)
	{
		return (-1);
	}
	return (_sqrt(num, root + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input
 * Return: If n has a natural square root - the natural square root of n
 * If n does not have a natural square root - (-1)
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_sqrt(n, root));
}
