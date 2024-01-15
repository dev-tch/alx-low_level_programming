#include "search_algos.h"
/**
* linear_search - search value in array
* @array: pointer to array
* @size: lenght of array
* @value: value to be searched in array
* Return: -1 or index of value in array
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);

	}
	return (-1);
}
