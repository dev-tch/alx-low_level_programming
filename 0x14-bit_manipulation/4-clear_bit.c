#include "main.h"
/**
* clear_bit - set a bit to zero at specified index
* @index: index to modify
* @n: number as input
* Return: (1 or -1)
*/
int clear_bit(unsigned long int *n, unsigned int index)
{

unsigned long  mask;
unsigned long nb_bits;
unsigned long mask2;

nb_bits = sizeof(n) * 8;
/*is outbound index*/
if (index >= nb_bits)
{
return (-1);
}
mask  = 1UL << index;
mask2 = ~mask;
*n &= mask2;
return (1);

}
