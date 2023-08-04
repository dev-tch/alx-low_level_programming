/**
* flip_bits - return the number of bits you would need  to flip
* @n: number
* @m:onother number
* Return: number of flipped bits to get the number m
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int nb_bits = 0;
unsigned long int flipped;

flipped = n ^ m;
while (flipped)
{
nb_bits += flipped & 1;
flipped >>= 1;
}
return (nb_bits);
}
