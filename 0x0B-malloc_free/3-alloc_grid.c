#include "main.h"

/**
 * alloc_grid - allocates a grid, make space and free space
 * @w: takes in width of grid
 * @h: height of grid
 * Return: grid with freed spaces
 */

int **alloc_grid(int w, int h)
{
int **grid;
int i, j;

if (w <= 0 || h <= 0)
{
return (NULL);
}

grid = malloc(sizeof(int *) * h);

if (grid == NULL)
{
return (NULL);
}

for (i = 0; i < h; i++)
{
grid[i] = malloc(sizeof(int) * w);
if (grid[i] == NULL)
{
for (i = i - 1; i >= 0; i--)
{
free(grid[i]);
}
free(grid);
return (NULL);
}
}
for (i = 0; j < w; j++)
grid[i][j] = 0;
return (grid);
}
