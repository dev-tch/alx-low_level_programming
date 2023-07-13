#include <stdlib.h>
#include <stddef.h>
/**
* _calloc - allocates memory for an array
* @nmemb: number of elements
* @size: size of element
* Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned char *byte_ptr = NULL;
unsigned int total = 0;
unsigned int i = 0;
void *ptr = NULL;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = (char *) malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
total = nmemb * size;
byte_ptr = (unsigned char *)ptr;
while (i < total)
{
byte_ptr[i] = 0;
i++;
}
return (ptr);
}
