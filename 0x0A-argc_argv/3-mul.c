#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return:0 for sucess and 1 for failure
 */

int main(int argc, char **argv)
{
	int multi;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multi = 1;
		while (*(++argv))
		{
			multi *= atoi(*argv);
		}
	}
	printf("%d\n", multi);
	return (0);
}
