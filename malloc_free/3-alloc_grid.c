#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2D array of integers.
 * @width: The width of the grid (number of columns).
 * @height: The height of the grid (number of rows).
 * Return: A pointer to the 2D array of integers, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	    int **grid;
	        int i, j;

	if (width <= 0 || height <= 0)
	return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	return (NULL);
	for (i = 0; i < height; i++)
	{
	grid[i] = malloc(width * sizeof(int));
	if (grid[i] == NULL)
	{
	while (i > 0)
	{
	free(grid[--i]);
	}
	free(grid);
	return (NULL);
	}
	for (j = 0; j < width; j++)
	grid[i][j] = 0; /* Initialize each element to 0 */
	}
	return (grid);
}
