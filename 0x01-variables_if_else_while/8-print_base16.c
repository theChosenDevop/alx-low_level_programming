#include <stdio.h>

/**
 * main - entry point
 * Description: prints hexacode followed by a new line
 * Return: 0 always
 */

int main(void)
{
	char ch = 'a';
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
