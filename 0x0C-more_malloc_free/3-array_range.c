#include <stdlib.h>
#include <stddef.h>
/**
*array_range - creates an array of integers
* @min: minimum value of array
* @max: maximum value of array
* Return: pointer to created array
*/
int *array_range(int min, int max)
{
int *tab, i, k = 0;
if (min > max)
return (NULL);
tab = (int *) malloc((max - min + 1) * sizeof(int));
if (tab == NULL)
return (NULL);
for (i = min ; i <= max ; i++)
{
tab[k] = i;
k++;
}
return (tab);
}
