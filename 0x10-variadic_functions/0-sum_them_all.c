#include <stdarg.h>
/**
* sum_them_all - variadic function to make sum
* @n: number of arguments
* Return: sum of arguments
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0, sum = 0;
/*declare pointer to argument list*/
va_list ptr;
if (n == 0)
return (0);
/*initialize argument to list pointer*/
va_start(ptr, n);
for (i = 0; i < n; i++)
{
/*acces current argument value and point to next*/
/*int : expected type for argument value*/
sum = sum +  va_arg(ptr, int);
}
/*finish reading arguments*/
va_end(ptr);
return (sum);
}
