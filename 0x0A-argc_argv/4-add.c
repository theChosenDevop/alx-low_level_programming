#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success or 1 for failure
 */

int main(int argc, char **argv)
{
	int sum, i, j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
		i = 1, sum = 0;

		while (i < argc)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
		return (0);
}
