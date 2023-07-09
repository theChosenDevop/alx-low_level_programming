#include "main.h"

/**
 *_atoi - converts string to integer
 * @s: input
 * Return: integer
 */

int _atoi(char *s)
{
	unsigned int size = 0, i = 0,  output = 0, dMulti = 1, neg = 1, count = 0;

	while (s[count] != '\0')
	{
		if (size > 0 && (s[count] < '0' || s[count] > '9'))
			break;

		if (*(s + count) == '-')
			neg *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
			{
				dMulti *= 10;
			}
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		output = output + ((s[i] - 48) * dMulti);
		dMulti /= 10;
	}

	return (output * neg);
}
