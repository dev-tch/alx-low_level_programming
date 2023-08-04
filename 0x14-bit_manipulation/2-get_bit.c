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
unsigned long nb_bits;
int res;
nb_bits = sizeof(n) * 8;
/*is outbound index*/
if (index >= nb_bits)
{
return (-1);
}
mask = 1UL << index;
res = (mask & n) ? 1 : 0;
return (res);
}
