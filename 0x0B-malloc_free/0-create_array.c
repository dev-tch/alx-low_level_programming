#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
* create_array - create an array of lenght equals size conatining same char
* @size: length of array
* @c: char
* Return: pointer to an array
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr_char = NULL;
if (size == 0)
return (NULL);
/* memory allocation*/
arr_char = (char *) malloc(size * sizeof(char));
for (i = 0 ; i < size ; i++)
{
arr_char[i] = c;
}
return (arr_char);
}

