#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: prints alphabets in lower case
 * Return: 0 Always
 */

int main(void)
{
	char br = 'a';

	while (br <= 'z')
	{
		putchar(br);
		++br;
	}
	putchar('\n');

	return (0);
}
