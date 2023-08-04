#include "main.h"
/**
* set_bit - set the value of bit to 1 at sepefied index
* @index: index to set
* @n: address of of number to modify
* Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long  mask;
unsigned long nb_bits;

nb_bits = sizeof(n) * 8;
/*is outbound index*/
if (index >= nb_bits)
{
return (-1);
}
mask = 1UL << index;
*n |= mask;
return (1);
}
