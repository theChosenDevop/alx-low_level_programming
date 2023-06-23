#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: input
 * Return: void
 */

void print_triangle(int size)
{
	int j, i = 0;
	int num = size;

	if (num  > 0)
	{
		while (i < num)
		{
			j = 0;
			while (j < num)
			{
				if (j < (num - 1 - i))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}

}
