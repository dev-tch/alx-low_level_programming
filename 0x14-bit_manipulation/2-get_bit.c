#include "main.h"
/**
* get_bit - return the value of bit at some index
* @index: index of bit
*@n: number
* Return: (1 or 0)
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long  mask;
int res;
mask = 1UL << index;
res = (mask & n) ? 1 : 0;
return (res);
}
