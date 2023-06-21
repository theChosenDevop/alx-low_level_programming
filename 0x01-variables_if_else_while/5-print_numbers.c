#include <stdio.h>

/**
 * main - entry point
 * Description: prints decimal numbers
 * Return: 0 always
 */

int main(void)
{
	int num, i;

	num = 10;

	for (i = 0; i < num; i++)
	{
		printf("%d", i);
	}

	printf("\n");

	return (0);
}
