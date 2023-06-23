#include <stdio.h>

/**
 * main - prints numbers form 1 - 100, multiples of 3 prints Fizzz,
 * multiples of 5 prints Buzz & multiples of both FizzBuzz
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
		printf("Buzz\n");

		return (0);
}
