#include "main.h"

/**
 * is_divisible - checks if a number is divisible
 * @num: input
 * @div: input
 * Return: value
 */

int is_divisible(int num, int div)
{
	if ((num % div) == 0)
	{
		return (0);
	}
	if (div == num / 2)
	{
		return (1);
	}

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - check if a number is prime
 * @n: input
 * Return: If the integer is not prime - 0
 * If the number is prime - 1
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n >= 2 && n <= 3)
	{
		return (1);
	}
	return (is_divisible(n, div));
}
