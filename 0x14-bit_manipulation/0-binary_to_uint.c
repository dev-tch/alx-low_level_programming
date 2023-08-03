#include "main.h"
/**
* len_string - calculate the length of string
* @str: string
* Return: length of string
*/
int len_string(const char *str)
{
if (*str == '\0')
return (0);
return (1 + len_string(str + 1));
}
/**
* binary_to_uint - convert binary string to int
* @b: binary string
* Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
int nb_digit = 0;
unsigned int  sum = 0;
unsigned int factor = 1;
int i = 0;

nb_digit  = len_string(b);
/*check b is null*/
if (b == NULL || *b == '\0')
return (0);
for (i = nb_digit - 1 ; i >= 0; i--)
{
if (b[i] != '0' &&  b[i] != '1')
return (0);
if (b[i] == '1')
sum += factor;
factor *= 2;
}
return (sum);
}
