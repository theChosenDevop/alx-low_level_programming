#include "3-calc.h"

/**
 * main - entry point
 * @argc: input
 * @argv: input
 * Return: result
 */
int main(int argc, char *argv[])
{
	int av1, av2, result;
	char s;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	av1 = atoi(argv[1]);
	av2 = atoi(argv[3]);

	ptr = get_op_func(argv[2]);

	if (!ptr)
	{
		printf("Error\n");
		exit(99);
	}

	s = *argv[2];

	if ((s == '/' || s == '%') && av2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = ptr(av1, av2);

	printf("%d\n", result);
	return (0);
}
