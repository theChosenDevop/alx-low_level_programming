#include <stdio.h>

/**
 * main - entry point
 * Description: prints the lowercase alphabet in reverse, followed by new line
 * Return: 0 always
 */

int main(void)
{
	char br = 'z';

	while (br >= 'a')
	{
		putchar(br);
		br--;
	}

	putchar('\n');

	return (0);
}
