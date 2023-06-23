#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * positive_or_negative - entry point
 * @i: input
 * Description: random number and states if it is positive, negative or zero
 * Return: void
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
