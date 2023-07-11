#include <stdlib.h>

/**
 * _strdup - duplicate str into a pointer
 * @str: pointer variable
 * Return:A pointer to a new string which is a duplicate
 * of the string str
 */

char *_strdup(char *str)
{
	char *ptr;

	int i = 0, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	i = i + 1;
	ptr = malloc(sizeof(*ptr) * i);

	while (str[j])
	{
		ptr[j] = str[j];
		j++;
	}

	ptr[j] = '\0';

	return (ptr);
}
