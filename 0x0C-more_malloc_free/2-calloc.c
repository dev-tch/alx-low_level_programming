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
char *ptr = NULL;
char *bkp = NULL;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = (char *) malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
bkp = ptr;
while (*ptr)
{
*ptr = '0';
ptr++;
}
return (bkp);
}
