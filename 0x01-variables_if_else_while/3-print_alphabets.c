#include <stdio.h>

/**
 * main - entry point
 * Description: prints the alphabet in lowercase
 * Return: 0 always
 */

int main(void)
{
	char br, ch;

	br = 'a';
	ch = 'A';

	for ( ; br <= 'z'; br++)
	{
		putchar(br);
	}
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
