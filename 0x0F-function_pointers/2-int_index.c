#include <stddef.h>
/**
* int_index - searches for an integer
* @array: array of elements
* @size: size of array
* @cmp: function pointer
* Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
int int_index = -1;
int res = 0;
if (size <= 0)
return (-1);
if (cmp == NULL)
return (-1);
if (array == NULL)
return (-1);
for (i = 0 ; i < size ; i++)
{
res = cmp(array[i]);
if (res > 0)
return (i);
}
return (int_index);
}
