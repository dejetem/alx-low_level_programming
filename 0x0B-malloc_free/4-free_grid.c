#include "main.h"

/**
 * free_grid - allocates a grid
 * @w: takes in width of grid
 * @h: height of grid
 * Return: free grid
 */

void free_grid(int **w, int h)
{
int i;

for (i = 0; i < h; i++)
{
free(w[i]);
}
free(w);
}
