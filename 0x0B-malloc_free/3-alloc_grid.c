#include <stdlib.h>
/**
 * alloc_grid - creates two dimensional array
 * @width: row of the array
 * @height: column of the array
 * Return: pointer to the new array
 */

int **alloc_grid(int width, int height)
{
	int i, j, f, **alloc_mem;

	if (width <= 0 || height <= 0)
		return ('\0');

	alloc_mem = malloc(sizeof(int *) * height);

	if (alloc_mem == NULL)
	{
		free(alloc_mem);
		return ('\0');
	}

	for (i = 0; i < height; i++)
	{
		alloc_mem[i] = malloc(sizeof(int) * width);

		if (alloc_mem[i] == NULL)
		{
			for (f = i; f >= 0; f--)
				free(alloc_mem[f]);

			free(alloc_mem);
			return ('\0');
		}
		for (j = 0; j < width; j++)
			alloc_mem[i][j] = 0;
	}
	return (alloc_mem);
}
