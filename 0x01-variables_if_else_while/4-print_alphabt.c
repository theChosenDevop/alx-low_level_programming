#include <stdio.h>

/**
 * main - entry point
 * Description: prints the alphabet in lowercase, followed by a new line
 * Return: 0 always
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
		putchar(ch);
		}
		ch++;
	}

	putchar('\n');

	return (0);
}
