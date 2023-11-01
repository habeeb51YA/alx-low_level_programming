
#include <stdlib.h>

/**
 * alloc_grid - Allocates and initializes a 2D array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the 2D array of integers.
 *         NULL on failure or if width/height are 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
		return (NULL);

	int **grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (int i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Memory allocation failed, free previous allocations and return NULL */
			for (int j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		/* Initialize all elements to 0 */
		for (int j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
