#include <stdlib.h>

/**
 * alloc_grid - A 2 dimensional array of integers
 * @width: input
 * @height: input
 * Return: A pointer to a 2  dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **matrix;

	int w, h = 0;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
	{
		return (NULL);
	}

	while (h < height)
	{
		matrix[h] = malloc(width * (sizeof(int)));
		if (matrix[h] == NULL)
		{
			while (h >= 0)
			{
				free(matrix[h]);
				h--;
			}
			free(matrix);
			return (NULL);
		}
		w = 0;
		while (w < width)
		{
			*(*(matrix + h) + w) = 0;
			w++;
		}
		h++;
	}
	return (matrix);
}
