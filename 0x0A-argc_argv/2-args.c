#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always for success
 */

int main(int argc, char **argv)
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
