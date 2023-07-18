#include <stdlib.h>
#include <stddef.h>
/**
* _min - calculates minimum of two numbers
* @a: int
* @b: int
* Return: int
*/
int _min(int a, int b)
{
if (a <= b)
return (a);
return (b);
}
/**
* _memcpy - copy len chars from src to dest
* @src: string to copy
* @dest: copied string
* @len: number of chars to coppy
* Return: copied string
*/
char *_memcpy(char *dest, char *src, int len)
{
int i = 0;
while (i < len)
{
*(dest + i) = *(src + i);
i++;
}
return (dest);
}
/**
* _realloc - reallocates memory block
* @ptr: pointer to already allocated memory block
* @old_size: size of already allocated memory
* @new_size: size of new memory to allocate
* Return: void
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *newptr;
int len = 0;
if (old_size == new_size)
return (ptr);
if (ptr == NULL)
{
newptr = (char *) malloc(new_size);
return (newptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
newptr = (char *) malloc(new_size);
if (newptr == NULL)
{
free(ptr);
return (NULL);
}
len = _min(old_size, new_size);
newptr = _memcpy(newptr, ptr, len);
free(ptr);
return (newptr);
}
