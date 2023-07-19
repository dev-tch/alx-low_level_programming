#include <stddef.h>
/**
* array_iterator - print elements of array using function pointer
* @array: pointer to array
* @size: size of array
* @action: function pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
if (action == NULL)
return;
if (array == NULL)
return;
for (i = 0 ; i < size ; i++)
{
(*action)(array[i]);
}
}
