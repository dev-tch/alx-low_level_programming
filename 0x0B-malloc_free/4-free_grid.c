#include <stdlib.h>
/**
* free_grid - free multi dimentianal array
* @grid: pointer to grid
* @height: number of lines
* Return: void
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0 ; i < height ; i++)
{
free(grid[i]);
}
free(grid);
}
