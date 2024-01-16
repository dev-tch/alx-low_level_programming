#include "search_algos.h"
/**
 * recursive_search - helper function to search in half in array each iteration
 * @array: pointer to array
 * @value: the value to be searched
 * @low: the lower index
 * @up: the upper index
 * Return: -1 or index of value
 */

int recursive_search(int *array, int value, size_t  low, size_t up)
{
	size_t mid, i = 0;

	if (low > up)
		return (-1);
	printf("Searching in array: ");
	for (i = low ; i < up; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[up]);
	mid = (int)((low + up) / 2);
	if (array[mid] < value)
		return (recursive_search(array, value, mid + 1, up));
	else if (array[mid] > value)
		return (recursive_search(array, value,  low, mid - 1));
	else
		return (mid);
}
/**
 * binary_search - search value using binary method
 * @array: pointer to array
 * @size: number of elements in array we want to make the serach
 * @value: the value to be searched
 * Return: -1 or index of value
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (recursive_search(array, value, 0, size - 1));
}
