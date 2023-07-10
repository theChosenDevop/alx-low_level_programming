#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always for success
 */

int main(int argc, char **argv)
{
	int numOfCoins = 0, cents = 0;

	if (argc == 2)
	{
		cents = atoi(argv[1]);

		while (cents > 0)
		{
		if (cents >= 25)
			cents = cents - 25;
		else if (cents >= 10)
			cents = cents - 10;
		else if (cents >= 5)
			cents = cents - 5;
		else if (cents >= 2)
			cents = cents - 2;
		else if (cents >= 1)
			cents = cents - 1;
		numOfCoins++;
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", numOfCoins);
	return (0);
}
