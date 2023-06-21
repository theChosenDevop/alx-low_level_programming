#include <stdio.h>

/**
 * main - entry point
 * Description: prints all possible combinations of single digits numbers
 * Return: 0 always
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}

	putchar('\n');

	return (0);
}
