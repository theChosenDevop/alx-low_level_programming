#include <stdio.h>

/**
 * main - entry point
 * Description: prints two two digit numbers
 * Return: 0 always
 */

int main(void)
{
	int num1, num2;

	while (num1 < 100)
	{
		while (num2 < 100)
		{
			if (num1 < num2)
			{
				putchar((num1 / 10) + 48);
				putchar((num1 % 10) + 48);
				putchar(' ');
				putchar((num2 / 10) + 48);
				putchar((num2 % 10) + 48);

				if (num1 != 98 || num2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num2 = 0;
		num1++;
	}

	putchar('\n');

	return (0);
}
