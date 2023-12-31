#include <stddef.h>
#include <stdlib.h>
/**
* alloc_grid - 2 dimensional array of integers
* @width:  width of grid
* @height: height of grid
* Return: int
*/
int **alloc_grid(int width, int height)
{
int **grid = NULL;
int i = 0, j = 0;
if (width <= 0 || height <= 0)
return (NULL);
/*top array - lines */
grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
{
/*clean ressources*/
free(grid);
return (NULL);
}
/*an array per line*/
for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width *  sizeof(int));
if (grid[i] == NULL)
{
/*clean ressources*/
for (j = 0 ; j < i ; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
for (j = 0; j < width ; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
