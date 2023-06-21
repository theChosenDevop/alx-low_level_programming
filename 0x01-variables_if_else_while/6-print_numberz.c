#include <stdio.h>

/**
 * main - entry point
 * Description: otput decimal numbers
 * Return: 0 always
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar((num) + 48);
		num++;
	}

	putchar('\n');

	return (0);
}
