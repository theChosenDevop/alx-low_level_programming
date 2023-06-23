#include <stdio.h>

/**
 * main - prints the largest prime factor of the number
 * Return: void
 */

int main(void)
{
	long i;

	long f = 2, n = 612852475143;

	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			f = i;
			n /= i;
		}
	}
	if (n > 1)
	{
		f = n;
	}
	printf("%ld\n", f);
	return (0);
}
