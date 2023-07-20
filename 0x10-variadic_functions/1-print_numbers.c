#include "variadic_functions.h"
#include <stdio.h>
/**
* print_numbers - print list of arguments using seperator
* @separator: string
* @n: int
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
int i;
int arg;
/*declare pointer to argument list*/
va_list ptr;
/*test size of arguments*/
if ((int)n <= 0)
{
printf("\n");
return;
}
/*point to first argument in list argument*/
va_start(ptr, n);
for (i = 0; i < (int)n  ; i++)
{
/*acces current arg of type int and point to the next */
arg = va_arg(ptr, int);
printf("%d", arg);
if (separator != NULL)
{
if (i != (int)(n - 1))
printf("%s", separator);
}
if (i == (int)(n - 1))
printf("\n");
}
/*clean up ptr*/
va_end(ptr);
}
