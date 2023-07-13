#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: input
 * @av: input
 * Return: a pointer to a new string or Null if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	ptr = malloc(len + 1 * (sizeof(char)));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = j = k = 0; k < len; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			ptr[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < len - 1)
		{
			ptr[k] = av[i][j];
		}
	}
		ptr[k] = '\0';
		return (ptr);
}
