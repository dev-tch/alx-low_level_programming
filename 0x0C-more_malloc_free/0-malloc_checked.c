#include <stdlib.h>
/**
* malloc_checked - allocates memory
* @b: int
* Return: pointer
*/
void *malloc_checked(unsigned int b)
{
int *ptr = NULL;
ptr = (int *) malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
